# Projeto de Estruturas de Repetição em C

![Linguagem C](https://img.shields.io/badge/Linguagem-C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)
![Status](https://img.shields.io/badge/Status-Acadêmico-blue?style=for-the-badge)
![Área](https://img.shields.io/badge/Área-Algoritmos-orange?style=for-the-badge)

## Sobre o projeto

Este projeto foi desenvolvido como atividade acadêmica da disciplina **Algoritmo e Pensamento Computacional**. O objetivo é aplicar estruturas de repetição e validação de dados na construção de um sistema de monitoramento de temperaturas em linguagem C.

O programa simula o acompanhamento de leituras de temperatura em um ambiente industrial, permitindo definir um limite de referência, registrar valores e identificar situações em que esse limite é ultrapassado.

## Funcionalidades

- Definição de um limite de temperatura maior que zero.
- Leitura contínua de temperaturas informadas pelo usuário.
- Validação de entradas inválidas.
- Identificação e contagem de temperaturas acima do limite estabelecido.
- Monitoramento de temperaturas consecutivas acima do limite.
- Encerramento automático após três leituras consecutivas acima do limite.
- Encerramento manual por meio da entrada `000`.
- Apresentação de um relatório com os resultados do monitoramento.

## Tecnologias utilizadas

- **Linguagem C:** implementação da lógica do programa.
- **Biblioteca `stdio.h`:** entrada e saída de dados.
- **Estruturas `while` e `do-while`:** repetição de instruções.
- **Estruturas condicionais:** validação e tomada de decisões.
- **Variáveis contadoras e acumuladoras:** registro e processamento das leituras.

## Como executar

### Pré-requisitos

- Um compilador C, como o GCC; ou
- Um ambiente de desenvolvimento online, como o OnlineGDB.

### 1. Clone o repositório

```bash
git clone https://github.com/ArtPie-dev/Projeto-estruturas-de-repeticao.git
```

### 2. Acesse a pasta do projeto

```bash
cd Projeto-estruturas-de-repeticao
```

### 3. Localize o código-fonte

Entre na pasta `desafio-monitoramento` e localize o arquivo `.c` do programa.

### 4. Compile o programa

Substitua `main.c` pelo nome real do arquivo-fonte:

```bash
gcc main.c -o monitoramento
```

### 5. Execute

No Linux ou em ambientes compatíveis:

```bash
./monitoramento
```

No Windows, utilizando GCC:

```bash
monitoramento.exe
```

## Demonstração e testes

A pasta `evidencias/` pode reunir capturas de tela que comprovem o funcionamento do programa.

Sugestões de testes:

1. Informar um limite válido e realizar leituras abaixo dele.
2. Informar temperaturas acima do limite e verificar a contagem.
3. Digitar três temperaturas consecutivas acima do limite e conferir o encerramento automático.
4. Informar `000` para encerrar manualmente.
5. Testar entradas inválidas durante a definição do limite e as leituras.

> Adicione capturas reais da execução após realizar os testes. Os exemplos acima são sugestões de validação, não resultados de testes já comprovados neste documento.

## Conceitos praticados

- Estruturas de repetição condicionais.
- Validação de entrada de dados.
- Contadores e acumuladores.
- Comparações e operadores lógicos.
- Processamento sequencial de informações.
- Organização e documentação de código.

## Autor

**Arthur Pierre de Aguiar da Silva**

Estudante de Ciência da Computação.

## Contexto acadêmico

- **Disciplina:** Algoritmo e Pensamento Computacional.
- **Professora:** Profa. Karla Sartin.

## Licença

Este projeto possui finalidade acadêmica. Consulte o arquivo `LICENSE` do repositório para verificar as condições de uso e distribuição do código.
