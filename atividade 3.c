#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
   float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Classificação: Excelente\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Classificação: Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Classificação: Razoável\n");
    } else {
        printf("Classificação: Insuficiente\n");
    }

    return 0;
}