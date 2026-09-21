
# Projeto de Estruturas de Repetição

## Identificação

* **Aluno:** Arthur Pierre de Aguiar da Silva
* **Disciplina:** Algoritmo e Pensamento Computacional
* **Professora:** **Profa. Karla Sartin**

## Monitoramento de Temperatura

O projeto consiste no desenvolvimento de um programa em linguagem C para realizar o monitoramento contínuo de temperaturas, utilizando estruturas de repetição para controlar a entrada e o processamento dos dados.

**Limite de Temperatura:** O limite de temperatura é informado pelo usuário no início da execução do programa. A entrada é realizada dentro de uma estrutura `do-while`, garantindo que o programa continue solicitando um valor até que seja informado um limite válido, obrigatoriamente maior que zero.

**Leituras:** Após a definição do limite, o programa passa a receber as temperaturas continuamente por meio de um laço `while`. Cada temperatura informada é armazenada e analisada pelo programa antes que uma nova leitura seja solicitada.

**Valores Inválidos:** O programa realiza a validação das entradas fornecidas pelo usuário. Caso seja digitado um valor que não seja numérico ou que não atenda às condições estabelecidas, uma mensagem de erro é apresentada e uma nova entrada é solicitada. Dessa forma, entradas inválidas não interrompem o funcionamento do monitoramento.

**Temperaturas acima do Limite:** A cada leitura válida, o programa compara a temperatura informada com o limite estabelecido. Quando o valor da temperatura é superior ao limite, a quantidade de temperaturas acima do limite é incrementada e a sequência de temperaturas elevadas é contabilizada.

**Contagem de Temperaturas Consecutivas:** O programa utiliza um contador para acompanhar a quantidade de temperaturas consecutivas acima do limite. Sempre que uma temperatura superior ao limite é identificada, o contador é incrementado. Caso a temperatura esteja dentro ou abaixo do limite, o contador de consecutivas é reiniciado, permitindo identificar corretamente apenas sequências contínuas de temperaturas elevadas.

**Encerramento do Monitoramento:** O monitoramento pode ser encerrado manualmente quando o usuário informa `000`. Além disso, o programa encerra automaticamente o monitoramento quando são identificadas três temperaturas consecutivas acima do limite estabelecido.

## Estruturas de Repetição

O programa utiliza as estruturas `do-while` e `while`, cada uma aplicada em uma etapa diferente do algoritmo.

O **`do-while`** é utilizado durante a definição do limite de temperatura. Essa estrutura é adequada porque a entrada precisa ser solicitada pelo menos uma vez antes que sua validade seja verificada. Caso o valor informado seja inválido, o laço retorna ao início e solicita uma nova entrada.

O **`while`** é utilizado durante o monitoramento das temperaturas. A estrutura permite realizar várias leituras de forma contínua enquanto o monitoramento estiver ativo. O laço é interrompido quando o usuário informa o código de encerramento ou quando o programa identifica três temperaturas consecutivas acima do limite.

A utilização das duas estruturas permite separar a validação inicial do limite da etapa de monitoramento contínuo das temperaturas.

## Como Executar

O programa pode ser compilado e executado utilizando um compilador C, como o GCC.

### Compilação

```bash
gcc monitoramento.c -o monitoramento
```

### Execução

No Linux ou em ambientes compatíveis:

```bash
./monitoramento
```

No Windows, utilizando o GCC:

```bash
monitoramento.exe
```

Também é possível utilizar ambientes de desenvolvimento online que ofereçam suporte à linguagem C, como o **Online GDB**.

## Testes Realizados

### Teste 1 — Validação de entradas inválidas

* **Entrada:** `abc`
* **Resultado esperado:** O programa deve identificar que a entrada não é numérica e solicitar novamente um valor válido.
* **Resultado obtido:** A entrada inválida foi identificada e o programa continuou a execução normalmente, solicitando uma nova entrada.

Esse teste verifica o tratamento de dados inválidos durante a entrada de informações.

### Teste 2 — Temperaturas acima do limite, porém não consecutivas

* **Limite de temperatura:** `80`
* **Temperaturas informadas:** `70`, `89`, `68`, `90`, `45`, `100`
* **Resultado esperado:** As temperaturas `89`, `90` e `100` devem ser identificadas como acima do limite. Entretanto, como elas não aparecem em sequência, o contador de temperaturas consecutivas deve ser reiniciado sempre que uma temperatura igual ou inferior a `80` for registrada.
* **Resultado obtido:** O programa identificou corretamente as temperaturas acima do limite sem atingir três ocorrências consecutivas, mantendo o monitoramento em execução.

### Teste 3 — Três temperaturas consecutivas acima do limite

* **Limite de temperatura:** `80`
* **Temperaturas informadas:** `45`, `87`, `90`, `120`
* **Resultado esperado:** As temperaturas `87`, `90` e `120` devem ser identificadas como três temperaturas consecutivas acima do limite.
* **Resultado obtido:** Após a terceira temperatura consecutiva acima de `80`, o programa encerrou automaticamente o monitoramento.

## Reflexão

### Por que foram escolhidas as estruturas `while` e `do-while`?

A escolha das estruturas foi feita considerando o momento em que a condição precisa ser verificada durante a execução do algoritmo.

O `do-while` foi utilizado para a definição do limite de temperatura porque é necessário realizar pelo menos uma tentativa de entrada antes de verificar se o valor informado é válido. Dessa forma, caso o usuário forneça um valor inválido, o programa retorna ao início do bloco e solicita uma nova entrada.

Já o `while` foi utilizado no monitoramento porque as leituras precisam ocorrer repetidamente enquanto o programa estiver em funcionamento. A cada repetição, uma nova temperatura é recebida, validada e analisada. O laço permanece ativo até que uma das condições de encerramento seja atingida.

A diferença entre as duas estruturas foi importante principalmente na validação do limite: no `do-while`, a execução acontece primeiro e a condição é verificada posteriormente; no `while`, a condição de continuidade é utilizada para controlar a repetição do monitoramento.
