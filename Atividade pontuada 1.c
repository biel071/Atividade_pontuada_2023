#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int temperatura;
    char clima;

    printf("Qual a Temperatura do jogo?:");
    scanf("%d", &temperatura);

    if (temperatura <= 25 && temperatura >= 15)
    {
        printf("O clima está nublado\n");
    }
    if (temperatura <= 14)
    {
        printf("O clima está chuvoso\n");
    }
    if (temperatura >=26)
    {
        printf("O CLIMA ESTÁ ENSOLARADO\n");
    }

    return 0;
}
