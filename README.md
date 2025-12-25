<div align="center">
  <h1>FloraExt</h1>
  <p>
    <strong>A Research Prototype for LoRa Network Simulation</strong>
  </p>

  <p>
    <a href="https://github.com/ProfFabioOliveira/floraext">
      <img src="https://img.shields.io/badge/version-0.1-blue.svg" alt="Version 0.1">
    </a>
    <a href="https://omnetpp.org/">
      <img src="https://img.shields.io/badge/OMNeT%2B%2B-6.0.3-green.svg" alt="OMNeT++ 6.0.3">
    </a>
    <a href="https://inet.omnetpp.org/">
      <img src="https://img.shields.io/badge/INET-4.4.2-orange.svg" alt="INET 4.4.2">
    </a>
    <img src="https://img.shields.io/badge/license-LGPL-lightgrey.svg" alt="License">
  </p>
</div>

<br>

<p align="justify">
  FloraExt is a research prototype framework currently under construction designed to enhance the accuracy of LoRa network simulations. Built upon FLoRa, INET, and OMNeT++, it introduces a validated propagation module and a systematic methodology for processing empirical field data to derive realistic simulation parameters. Although initially validated using data collected in dense tropical forests (Serra dos Órgãos National Park), this data-driven workflow is generalizable to other complex environments, such as urban areas or agricultural fields, ensuring higher reliability in network performance assessments.
</p>

<hr>

<h2>📋 Prerequisites</h2>

<ul>
  <li>
    <b>Operating System:</b>
    <ul>
      <li>Windows 10/11 with <b>WSL2</b> (Ubuntu 20.04/22.04 recommended).</li>
      <li>Native Linux (Ubuntu/Fedora/Debian).</li>
    </ul>
  </li>
  <li>
    <b>Dependencies:</b>
    <ul>
      <li>Build packages (<code>build-essential</code>, <code>bison</code>, <code>flex</code>, etc.) installed in your Linux/WSL terminal.</li>
    </ul>
  </li>
</ul>

<h2>🚀 Installation Guide</h2>

<h3>1. OMNeT++ 6.0.3</h3>
<p>FloraExt requires OMNeT++ version <b>6.0.3</b>.</p>
<ol>
  <li>Download <b>OMNeT++ 6.0.3 Core (Linux/tgz)</b> from the official website.</li>
  <li>Extract and install via terminal (refer to <code>Install-guide.pdf</code>):</li>
</ol>
<pre><code>. setenv
./configure
make</code></pre>

<h3>2. INET Framework 4.4.2</h3>
<ol>
  <li>Open OMNeT++ IDE.</li>
  <li>Go to <b>Help > Install Simulation Models...</b></li>
  <li>Select <b>INET Framework</b> and choose version <b>4.4.2</b>.</li>
  <li>Click <b>Install Project</b>.</li>
</ol>

<h3>3. FloraExt Setup</h3>
<p>Clone the repository directly into your workspace:</p>
<pre><code>git clone https://github.com/ProfFabioOliveira/floraext.git</code></pre>

<p><b>Importing to IDE:</b></p>
<ol>
  <li>Go to <b>File > Import...</b> > <b>Existing Projects into Workspace</b>.</li>
  <li>Select the cloned <code>floraext</code> folder.</li>
  <li>Right-click the project > <b>Properties</b> > <b>Project References</b>.</li>
  <li>Check <b>inet4.4</b> and build the project.</li>
</ol>

<h2>▶️ Running Examples</h2>
<p>To validate the installation:</p>
<ol>
  <li>Navigate to: <code>floraext > simulations > examples</code>.</li>
  <li>Right-click <code>omnetpp.ini</code>.</li>
  <li>Select <b>Run As > OMNeT++ Simulation</b>.</li>
</ol>

<hr>

<p align="center">
  <sub>Maintained by <a href="https://github.com/ProfFabioOliveira">ProfFabioOliveira</a></sub>
</p>
