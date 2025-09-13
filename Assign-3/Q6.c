#include<stdio.h>

int main()
{
	int num;

	printf("Enter the Number: ");
	scanf("%d",&num);
	int i=1;
	printf("all factors=");
	while( i<num)
	{
	
		if(num%i==0)
			printf("%d,",i);
		i++;
	}

	printf("\b");
	printf("  \n");

	
	return 0;
}


