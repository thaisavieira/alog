#include <stdio.h>

void main (void)
{
  int   Idade, TotalDias;
  printf("Digite a idade: ");
  scanf("%i", &Idade);
  TotalDias = Idade * 365 ;
  printf("\n Total de dias: %i", TotalDias); 
}             
