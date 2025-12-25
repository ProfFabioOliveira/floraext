Guia de Instalação e Execução - FloraExt
Este documento orienta a instalação do framework FloraExt (baseado no FLoRa) em ambientes Linux ou Windows utilizando WSL (Windows Subsystem for Linux).

📋 Pré-requisitos
Sistema Operacional:

Windows 10/11 com WSL2 ativado (recomendado Ubuntu 20.04 ou 22.04).

Ou Linux Nativo (Ubuntu/Fedora/Debian).

Pacotes Básicos: Certifique-se de ter as dependências de compilação (C++, Make, Bison, Flex) instaladas no seu terminal Linux/WSL.

🚀 Passo a Passo da Instalação
1. Instalação do OMNeT++ 6.0.3
O FloraExt foi desenvolvido para rodar sobre a versão 6.0.3 do OMNeT++.

Baixe o OMNeT++ 6.0.3 Core (Linux/tgz) no site oficial.

Extraia o arquivo no seu diretório de preferência no Linux/WSL (ex: ~/omnetpp-6.0.3).

Abra o terminal na pasta extraída e siga o manual de instalação oficial do OMNeT++ (arquivo Install-guide.pdf na pasta doc).

Resumidamente, execute:

Bash

. setenv
./configure
make
Após a compilação, inicie a IDE digitando omnetpp no terminal.

2. Instalação do INET Framework 4.4.2
Com o OMNeT++ aberto, precisamos instalar a biblioteca padrão de redes (INET) na versão compatível.

No menu superior do OMNeT++, vá em Help > Install Simulation Models....

Na lista que aparecer, selecione INET Framework.

No menu dropdown de versões, escolha especificamente a versão 4.4.2.

Clique em Install Project.

Aguarde o download e a compilação.

Nota: Se perguntado se deseja compilar agora, clique em Yes. Este processo pode demorar alguns minutos.

3. Instalação do FloraExt
Localize o arquivo floraext.zip que se encontra na mesma pasta deste README.

Descompacte o arquivo. Recomenda-se colocá-lo na mesma pasta de workspace onde o diretório do inet4.4 foi criado.

No OMNeT++ IDE (Eclipse):

Vá em File > Import....

Selecione General > Existing Projects into Workspace e clique em Next.

Em Select root directory, clique em Browse e selecione a pasta descompactada do floraext.

Certifique-se de que a caixa do projeto floraext está marcada e clique em Finish.

4. Compilando o Projeto
No explorador de projetos (lado esquerdo), clique com o botão direito na pasta floraext.

Selecione Properties > Project References.

Garanta que a caixa inet4.4 está marcada. Clique em Apply and Close.

Clique com o botão direito novamente na pasta floraext e selecione Build Project.

Aguarde a finalização da compilação sem erros.

▶️ Rodando uma Simulação Exemplo
Para testar se tudo está funcionando corretamente:

No explorador de arquivos do OMNeT++, navegue até: floraext > simulations > examples.

Encontre o arquivo omnetpp.ini.

Clique com o botão direito no arquivo omnetpp.ini.

Selecione Run As > OMNeT++ Simulation.

Uma janela gráfica (Qtenv) deverá abrir. Clique no botão Run (ícone de "Play" no topo) para iniciar a visualização da rede LoRa.

🛠️ Solução de Problemas Comuns
Erro "INET not found": Verifique se o projeto INET 4.4.2 está aberto no seu workspace e se o floraext está referenciando ele (Passo 4 da instalação).

WSL sem interface gráfica: Se estiver no Windows e a interface gráfica não abrir, certifique-se de estar usando o WSLg (padrão no Win 11) ou tenha um XServer (como VcXsrv) instalado e configurado no Windows 10.
