#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char dia = 's';
    float preco;
    int desconto;

    printf("Você está em um dia de semana\n");
    scanf("%c", &dia);

    printf("Digite o preco do produto:");
    scanf("%f", &preco);

    if (dia == 's')
    {
        desconto = preco * 0.1;
        desconto = preco - desconto;
        printf("o preco a pagar é %d\n", desconto);
    }
    if (dia == 'n')
    {
        desconto = preco * 0.15;
        desconto = preco - desconto;
     printf("o preco a pagar é %d\n", desconto);

     system ("cls||clear");
    } if (preco <=99){

    printf("o preco a pagar é %2.f\n", preco);
}
    return 0;
}