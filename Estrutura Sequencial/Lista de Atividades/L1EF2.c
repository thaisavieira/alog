#include <stdio.h>

void main(void)
{
   int  QtdeDias;
   float   ValDiaria, ValHosped;
   printf("Digite o valor da diaria: ");
   scanf("%f", &ValDiaria);
   printf("Digite a quantidade de dias: ");
   scanf("%i", &QtdeDias);
   ValHosped = ValDiaria * QtdeDias;
   printf("\nValor da hospedagem: %.2f", ValHosped);
}