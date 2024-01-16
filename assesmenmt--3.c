
#include <stdio.h>
int main()
{
  int m,n=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(m=1;m<=num;m++)
      n=n*m;

  printf("\nThe Factorial of %d is: %d\n",num,n);
  return 0;
}
