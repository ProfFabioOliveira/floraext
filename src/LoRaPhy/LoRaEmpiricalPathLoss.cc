//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "LoRaEmpiricalPathLoss.h"

namespace floraext {

Define_Module(LoRaEmpiricalPathLoss);

LoRaEmpiricalPathLoss::LoRaEmpiricalPathLoss()
{
}

void LoRaEmpiricalPathLoss::initialize(int stage)
{
    FreeSpacePathLoss::initialize(stage);
    if (stage == INITSTAGE_LOCAL) {
        d0 = m(par("d0"));
        n = par("n");
        B = par("B");
        sigma = par("sigma");
        rxAntennaGain_dB = par("rxAntennaGain_dB");
        txAntennaGain_dB = par("txAntennaGain_dB");
    }
}

double LoRaEmpiricalPathLoss::computePathLoss(mps propagationSpeed, Hz frequency, m distance) const
{
    double pathLoss = B + 10 * n * log10(unit(distance/d0).get());
     if (sigma > 0) {
         double shadowing = const_cast<LoRaEmpiricalPathLoss*>(this)->normal(0.0, sigma);
         pathLoss += shadowing;

     }
     pathLoss -= txAntennaGain_dB;
     pathLoss -= rxAntennaGain_dB;

    auto* self = const_cast<LoRaEmpiricalPathLoss*>(this);
    return math::dB2fraction(-pathLoss);
}

}
