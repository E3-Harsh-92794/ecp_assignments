#include<stdio.h>


int main()
{

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	if(num%2==0)
	{
		printf("Entered number is even number.\n");
	}
	else
		printf("Entered number is odd number.\n");

	return 0;

}
