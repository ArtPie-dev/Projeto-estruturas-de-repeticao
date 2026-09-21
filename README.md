# Projeto de Estruturas de Repetição

## Identificação

* **Aluno:** Arthur Pierre de Aguiar da Silva
* **Disciplina:** Algoritmo e Pensamento Computacional
* **Professora:** Profa. Karla Sartin

## Monitoramento de Temperatura

Programa desenvolvido em linguagem C para monitorar temperaturas informadas pelo usuário.

O programa:

* Define um limite de temperatura maior que zero.
* Recebe leituras de temperatura continuamente.
* Valida entradas inválidas.
* Identifica temperaturas acima do limite.
* Conta temperaturas consecutivas acima do limite.
* Encerra automaticamente após 3 temperaturas consecutivas acima do limite.
* Permite encerramento manual utilizando `000`.
* Apresenta os resultados do monitoramento.

## Estruturas de Repetição

Foi utilizado `do-while` para validar o limite de temperatura, garantindo que o usuário informe pelo menos um valor antes da verificação.

O `while` é utilizado para realizar as leituras continuamente até que uma condição de encerramento seja atingida.

## Como Executar

O programa foi desenvolvido e testado utilizando o **OnlineGDB**, um compilador e ambiente de execução online para programas em C.

Para executar:

1. Acesse o OnlineGDB.
2. Selecione a linguagem **C**.
3. Insira o código do arquivo `monitoramento.c`.
4. Clique em **Run** para executar o programa.

## Testes

### Teste 1 — Entrada inválida

Foi inserido um valor não numérico, como `abc`. O programa identificou a entrada inválida e solicitou um novo valor.

### Teste 2 — Temperaturas acima do limite não consecutivas

**Limite:** `80`

**Entradas:** `70`, `89`, `68`, `90`, `45`, `100`

As temperaturas acima do limite foram identificadas, mas a sequência foi reiniciada sempre que uma temperatura igual ou inferior a `80` foi registrada.

### Teste 3 — Três temperaturas consecutivas

**Limite:** `80`

**Entradas:** `45`, `87`, `90`, `120`

As três últimas temperaturas ficaram acima do limite. O programa identificou a sequência e encerrou o monitoramento automaticamente.

## Reflexão

O `do-while` foi escolhido para a validação do limite porque a primeira entrada precisa acontecer antes da verificação da condição.

O `while` foi utilizado no monitoramento porque as temperaturas precisam ser lidas continuamente enquanto nenhuma condição de encerramento for atingida.
