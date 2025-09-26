//Que1

#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	fact(num);
	return 0;
}

int fact(int num)
{
	int i=1,fact=1;
	for(i=1;i<=num;i++)
	{
		printf("%d*",i);
		fact=fact*i;

	}

        printf("\b=%d",fact);

}
