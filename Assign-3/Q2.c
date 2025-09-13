#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number you table of: ");
	scanf("%d",&num);
	printf("Table of %d\n",num);
	int i=1;
	while(i<=10)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	     i++;
	}
	return 0;
}

