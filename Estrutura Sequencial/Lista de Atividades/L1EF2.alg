#include <stdio.h>

void main(void)
{
   int  QtdeDias;
   float   ValDiaria, ValHosped;
   scanf("%f", &ValDiaria);
   scanf("%i", &QtdeDias);
   ValHosped = ValDiaria * QtdeDias;
   printf("%f", ValHosped);
}