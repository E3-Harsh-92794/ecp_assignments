#include<stdio.h>


int main()
{
 	int n1,n2;
	printf("Enter First Number: ");
	scanf("%d",&n1);
	printf("Enter Second Number: ");
	scanf("%d",&n2);

	if (n2>0||n2<0)
	{
		printf("Result is:%d\n",n1/n2);
	}
	else
		printf("Entered number should not be a Zero.\n");


	return 0;

}
