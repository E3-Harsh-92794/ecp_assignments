#include<stdio.h>

int main()
{
	int num,fact=1;

	printf("Enter the Number: ");
	scanf("%d",&num);
	int i=num;
	while( i>=1)
	{
		fact*=i;
		if(i>1)
			printf("%d*",i);
		else
			printf("%d",i);
		i--;
	}
	printf("=%d\n",fact);
	return 0;
}


