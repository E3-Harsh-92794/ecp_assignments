#include<stdio.h>


int main()
{	
    int num;
	printf("Enter the Number: ");
	scanf("%d",&num);

	if(num>0)
	{
		printf("Entered number is Positive.\n");
	}
	else if(num<0)
	{
		printf("Entered Number is Negative.\n");
	}
	else
	{
		printf("Entered Number is Zero.\n");
	}


	return 0;

}
