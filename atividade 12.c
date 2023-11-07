#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

int i;
float nota;
float soma = 0;
float media;


for ( i = 0; i < 3; i++){
  do {
    printf("Digite a %d° nota:", i + 1);
    scanf("%f",&nota);
  }while (nota < 0 || nota > 10);

  soma += nota;
}

media = soma / i;

printf("\nMédia: %1.f \n", media);




return 0;
}