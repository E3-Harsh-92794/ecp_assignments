#include<stdio.h>

int main()
{
	int num,temp;

	printf("Enter the Number: ");
	scanf("%d",&num);
	int i=1;
	
	while( i<=num/2)
	{
		temp=num/i;
		
	
		if(i<temp)
		{
			printf("%d*%d=%d\n",i,temp,num);
		}
		i++;

	}


	
	return 0;
}


