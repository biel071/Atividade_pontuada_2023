#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");


 int escolha;
float valor, resultado;

    while (1) {
        printf("Escolha uma opção de conversão:\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        switch (escolha) {
            case 1:
                printf("Digite a distância em quilômetros: ");
                scanf("%f", &valor);
                resultado = valor * 0.6; 
                printf("%.f quilômetros equivalem a %.0f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9.0/5.0) + 32; // Conversão de Celsius para Fahrenheit
                printf("%.f graus Celsius equivalem a %.f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
