#include<stdio.h>
int main()
{
   float A,B,C,med;
   scanf("%f %f %f",&A,&B,&C);
   med=((A*2)+(B*3)+(C*5))/(2+3+5);
   printf("MEDIA = %.1f\n",med);
   return 1;
}
