#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
      int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}