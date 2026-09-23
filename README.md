# lpa-trabalho-b1

## Descrição 
O consiste em um Simulador de Entregas desenvolvido em linguagem C. A aplicação simula o sistema de cálculo de frete e serviços adicionais para uma empresa de entregas locais.
O programa processa múltiplas solicitações de entrega em uma mesma sessão de atendimento, calculando as tarifas de acordo com regras de negócio específicas e ao final, apresentando um resumo estatístico consolidado da sessão.

## Funcionalidades
Entrada e validação de dados:

Distancia (apenas valores positivos)

Peso (apenas valores positivos)

Modalidade de entrega (seleção por codigo: 1 - economica, 2 - expressa, 3 - prioritaria)

Serviço de proteção (Opções: 1 - Sim, 0 - Não)

Tentativas Adicionais (0 e valores positivos)

Processamento de varias entregas (Cadastrar novas entregas - 1, Encerrar sessão - 0)

Resumo final da sessão (Total de entregas, valor total, valor medio das entregas,contador de modalidades, menor e maior valor)

## Organização da solução
### Apresentação de Menus:
ExibirValoresDistancia(): Exibe a tabela explicativa de preços e tarifas fixas por faixa de distância.

ExibirValoresPeso(): Apresenta as percentagens de adicional baseadas no peso da encomenda.

MenuModalidade(): Mostra as opções de envio (Econômica, Expressa e Prioritária) e os respetivos percentuais.

### Cálculo e Validação de Entradas:
CalculoValorDistancia(): Solicita e valida a distância em km (deve ser >0), determina a tarifa base de acordo com a faixa e calcula o subtotal inicial

CalculoValorPeso(): Solicita e valida o peso em kg (>0) e devolve o fator multiplicador do adicional por peso.

Modalidade(): Lê e valida o código da modalidade escolhida (1, 2 ou 3), atualiza os contadores globais por ponteiro (*qntecn, *qntexp, *qntpri) e devolve o multiplicador correspondente.

Protecao(): Pergunta se o cliente quer o serviço de proteção (1 para Sim, 0 para Não) e devolve a taxa fixa de R$ 7,50 caso contratado.

Tentativas(): Solicita e valida a quantidade de tentativas adicionais (≥0) e calcula a taxa correspondente (R$4,00 por tentativa).

### Processamento Geral e Controle do Fluxo:
ValorTotalEntrega(): Recebe os componentes do preço e realiza a soma final de todas as parcelas calculadas para a entrega.

Repeticao(): Garante a validação da escolha do utilizador ao perguntar se deseja registar uma nova entrega (1) ou encerrar a sessão (0).

## Compilação:
### Compilar no terminal do windows:
Com um compilador de C (Exemplo: GCC) abra o arquivo "programa.exe" na pasta do projeto, se não funcionar, execute o comando: cd "diretorio do projeto até a pasta \trabalho" e depois o comando: gcc main.c entregas.c -o programa.exe 

### Compilar no VSCODE:
Com um compilador de C (Exemplo: GCC) abra apasta \trabalho no vscode e no arquivo main.c, use o atalho Ctrl + Shift + B e F5 para compilar o programa com todos os arquivos em conjunto.

## Uso de inteligencia artificial:
Ferramenta utilizada: Gemini, Finalidade: contrução do README, Sugestões aproveitadas: explicação de compilação e funcionalidades

## Fontes consultadas:
Apostilas da disciplina de Lógica de Programação e Algoritmos