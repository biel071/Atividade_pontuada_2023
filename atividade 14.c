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
    printf("Digie o %d� n�mero: ", quantidadeGeral + 1);
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

  printf("Quantidade de n�meros pares: %d \n", pares);
  printf("Quantidade de n�meros impares: %d \n", impares);
  printf("M�dia dos n�meros pares: %.1f\n", mediaPares);
  printf("M�dia dos n�meros impares: %.1f\n", mediaImpares);
  printf("M�dia geral: %.1f\n", mediaGeral);


return 0;
}