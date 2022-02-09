#include <stdio.h>
#include <math.h>

int main(void) {


int idade, cont=0, cont1=0, soma=0;
float media=0, pct;


for (int i=1; i<=100; i++){
  printf("Insira a idade da %dº pessoa: ", i);
  scanf("%d", &idade);
  cont++;
  soma+=idade;
  if (idade>21 && idade<65){
    cont1++;
  }
}

media= soma/cont;
pct= cont1*100/100;

printf("A média desse grupo é de: %.2f", media);
printf("\nA porcentagem de pessoas com idade entre 21 e 65 anos é igual a: %.2f", pct);

 

  return 0;
}
