#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int numero;
  int pares = 0;
  int impares = 0;
  int quantidadeGeral = 0;
  int somaGeral = 0;
  int somaPares = 0;
  int somaImpares = 0;
  float mediaGeral;
  float mediaPares;
  float mediaImpares;

  do{
    printf("Digie o %d° número: ", quantidadeGeral + 1);
    scanf("%d", &numero);

    if (numero > 0){
      somaGeral += numero;
      quantidadeGeral++;
    
    
      if (numero % 2 == 0)
      {
      somaPares += numero;
      pares++;
      } else if (numero % 2 == 1)
       {
      somaImpares += numero;
      impares++;
    }
    
    
    }
  } while (numero > 0);

  mediaGeral = somaGeral / quantidadeGeral;
  mediaPares = somaPares /  pares;
  mediaImpares = somaImpares / impares;

  printf("Quantidade de números pares: %d \n", pares);
  printf("Quantidade de números impares: %d \n", impares);
  printf("Média dos números pares: %.1f\n", mediaPares);
  printf("Média dos números impares: %.1f\n", mediaImpares);
  printf("Média geral: %.1f\n", mediaGeral);


return 0;
}