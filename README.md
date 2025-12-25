FloraExt (v0.1)
Este projeto contém o código-fonte do framework FloraExt (baseado no FLoRa) para simulação de redes LoRa/LoRaWAN no OMNeT++.

Repositório Oficial: https://github.com/ProfFabioOliveira/floraext

📋 Pré-requisitos
Sistema Operacional:

Windows 10/11 com WSL2 (Ubuntu 20.04/22.04 recomendado).

Ou Linux Nativo (Ubuntu/Fedora/Debian).

Dependências:

Pacotes de compilação (build-essential, bison, flex, etc) instalados no terminal Linux/WSL.

🚀 Guia de Instalação Passo a Passo
1. Instalação do OMNeT++ 6.0.3
O FloraExt foi desenvolvido para rodar sobre a versão 6.0.3 do OMNeT++.

Baixe o OMNeT++ 6.0.3 Core (Linux/tgz) no site oficial.

No terminal (WSL ou Linux), extraia o arquivo e siga o manual de instalação (Install-guide.pdf).

Resumo dos comandos:

Bash

. setenv
./configure
make
Inicie a IDE digitando omnetpp no terminal.

2. Instalação do INET Framework 4.4.2
Com o OMNeT++ aberto, instale a biblioteca padrão de redes:

No menu superior, vá em Help > Install Simulation Models....

Selecione INET Framework.

Escolha a versão 4.4.2.

Clique em Install Project e aguarde a compilação.

3. Instalação do FloraExt (Via Git)
Agora, vamos clonar este repositório para o seu ambiente de trabalho.

Abra o terminal na pasta onde você instalou o OMNeT++ (geralmente a pasta que contém o inet4.4), ou na sua pasta de workspace.

Execute o comando para baixar o código:

Bash

git clone https://github.com/ProfFabioOliveira/floraext.git
No OMNeT++ IDE (Eclipse):

Vá em File > Import....

Selecione General > Existing Projects into Workspace e clique em Next.

Em Select root directory, clique em Browse e selecione a pasta floraext que acabou de ser clonada.

Clique em Finish.

4. Compilando o Projeto
No explorador de projetos (lado esquerdo), clique com o botão direito na pasta floraext.

Selecione Properties > Project References.

Marque a caixa inet4.4 e clique em Apply and Close.

Clique com o botão direito na pasta floraext e selecione Build Project.

▶️ Rodando uma Simulação Exemplo
Para testar a instalação:

No OMNeT++, navegue até: floraext > simulations > examples.

Clique com o botão direito no arquivo omnetpp.ini.

Selecione Run As > OMNeT++ Simulation.

🔄 Como atualizar
Caso o código do repositório seja atualizado, você pode baixar as novidades sem reinstalar tudo. Basta abrir o terminal na pasta do projeto e rodar:
