#include<stdio.h>

int main()
{
	int num,fact=1;

	printf("Enter the Number: ");
	scanf("%d",&num);
	int i=1;
	while( i<=num)
	{
		fact*=i;
		if(i<num)
			printf("%d*",i);
		else
			printf("%d",i);
		i++;
	}
	printf("=%d\n",fact);
	return 0;
}


