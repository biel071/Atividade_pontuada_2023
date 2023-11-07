#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int n1, n2;
    int maior, menor;

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    maior = n1 > n2 ? n1 : n2;
    menor = n1 < n2 ? n1 : n2;
    

    printf("\nMaior numero: %d \n", maior);
    printf("Menor numero: %d \n", menor);

    return 0;
} 