#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
   int codigo = 4141;
int codnovo;



do
{
  printf("Digite o codigo: ");
  scanf("%d", &codnovo);
if (codnovo == codigo)
{
printf("Autorizado.");
} else{
  printf("Nao autorizado, digite o codigo novamente. \n");
}
} while (codnovo != codigo);



return 0;
} 