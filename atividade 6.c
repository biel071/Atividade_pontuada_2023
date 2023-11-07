#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
      int codigo;
    float preco;

    printf("Escolha o código do produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Calça\n");
    printf("3 - Sapato\n");
    printf("Digite o código do produto: ");
    
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Produto selecionado: Camiseta\n");
            preco = 57;
            break;
        case 2:
            printf("Produto selecionado: Calça\n");
            preco = 125;
            break;
        case 3:
            printf("Produto selecionado: Sapato\n");
            preco = 362;
            break;
        default:
            printf("Código de produto inválido.");
            return 1; 
    }

    printf("Preço: R$%.2f\n", preco);

    return 0;
}