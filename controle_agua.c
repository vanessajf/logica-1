#include <stdio.h>

int main() {

    float litros;

    printf("=== CONTROLE DE CONSUMO DE AGUA ===\n");

    printf("Digite a quantidade de litros consumidos no mes: ");
    scanf("%f", &litros);

    if(litros <= 5000)
    {
        printf("\nConsumo Baixo.\n");
        printf("Parabens! O uso da agua esta controlado.\n");
    }
    else if(litros > 5000 && litros <= 10000)
    {
        printf("\nConsumo Adequado.\n");
        printf("Continue mantendo bons habitos.\n");
    }
    else if(litros > 10000 && litros <= 15000)
    {
        printf("\nConsumo Alto.\n");
        printf("Tente reduzir banhos longos e desperdicios.\n");
    }
    else
    {
        printf("\nConsumo Muito Alto.\n");
        printf("Atencao! Seu consumo esta acima do recomendado.\n");
    }

    return 0;
}