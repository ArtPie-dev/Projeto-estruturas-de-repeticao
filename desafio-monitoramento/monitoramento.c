#include <stdio.h>

int main() {
float limite;
float temperatura;
float soma_temperaturas = 0.0;
float maior_temperatura, menor_temperatura;

int quantidade_leituras = 0;
int leituras_acima_limite = 0;
int sequencia_acima = 0;

printf("==== SISTEMA DE MONITORAMENTO INDUSTRIAL ====\n");

// Define o limite de temperatura e verifica se o valor informado e valido.
do {
    printf("Digite o limite de temperatura: ");

    if (scanf("%f", &limite) != 1) {
        printf("Entrada invalida. Digite um valor numerico.\n");

        // Limpa os caracteres restantes no buffer de entrada.
        while (getchar() != '\n');

        continue;
    }

    if (limite <= 0) {
        printf("O limite de temperatura deve ser maior que 0°C.\n");
    }

} while (limite <= 0);

// Inicia o recebimento das temperaturas do monitoramento.
printf("\nDigite a temperatura ou 000 para encerrar manualmente.\n");

while (1) {
    printf("Temperatura %d: ", quantidade_leituras + 1);

    if (scanf("%f", &temperatura) != 1) {
        printf("Entrada invalida. Digite um valor numerico.\n");

        // Remove a entrada invalida antes de solicitar um novo valor.
        while (getchar() != '\n');

        continue;
    }

    // O valor 000 permite que o usuario encerre o monitoramento manualmente.
    if (temperatura == 0) {
        printf("\nMonitoramento encerrado.\n");
        break;
    }

    // Inicializa e atualiza as temperaturas maior e menor registradas.
    if (quantidade_leituras == 0) {
        maior_temperatura = temperatura;
        menor_temperatura = temperatura;
    } else {
        if (temperatura > maior_temperatura) {
            maior_temperatura = temperatura;
        }

        if (temperatura < menor_temperatura) {
            menor_temperatura = temperatura;
        }
    }

    // Atualiza a quantidade total de leituras e a soma das temperaturas.
    soma_temperaturas += temperatura;
    quantidade_leituras++;

    // Verifica se a temperatura ultrapassou o limite estabelecido.
    if (temperatura > limite) {
        leituras_acima_limite++;
        sequencia_acima++;

        printf("ALERTA: Temperatura acima do limite! "
               "(%d/3 leituras consecutivas)\n", sequencia_acima);
    } else {
        // Uma temperatura dentro do limite interrompe a sequencia.
        sequencia_acima = 0;
    }

    // Tres temperaturas consecutivas acima do limite encerram o sistema.
    if (sequencia_acima == 3) {
        printf("\nALERTA: 3 temperaturas consecutivas acima do limite!\n");
        printf("Desligamento automatico do sistema ativado.\n");
        break;
    }
}

// Exibe o resumo das informações coletadas durante o monitoramento.
printf("\n=========================================\n");
printf("             RELATORIO FINAL             \n");
printf("=========================================\n");

if (quantidade_leituras > 0) {
    float media_temperaturas = soma_temperaturas / quantidade_leituras;

    printf("Total de leituras validas: %d\n", quantidade_leituras);
    printf("Media das temperaturas: %.2f°C\n", media_temperaturas);
    printf("Maior temperatura registrada: %.2f°C\n", maior_temperatura);
    printf("Menor temperatura registrada: %.2f°C\n", menor_temperatura);
    printf("Leituras acima do limite: %d\n", leituras_acima_limite);
} else {
    printf("Nenhuma leitura valida foi registrada.\n");
}

printf("=========================================\n");

return 0;

}
