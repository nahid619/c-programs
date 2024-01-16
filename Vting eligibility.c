#include<stdio.h>

int main()
{
	int a ;

	printf("Enter the age of the person: ");
	scanf("%d",&a);

	if (a>=18)
	{
		printf("\nEigibal for voting. \n");
	}
	else
	{
		printf("\nNot eligibal for voting. \n");
	}

	return 0;
}
