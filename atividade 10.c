
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite a operacao desejada (+ ou -): ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.f + %.f = %.f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.f - %.f = %.f\n", num1, num2, resultado);
            break;
        default:
            printf("Operação invalida. Por favor, digite + ou -.\n");
    }

    return 0;
}