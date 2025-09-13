#include<stdio.h>

int main()
{
	char ch;
	int num,i;

	printf("Enter The character: ");
	scanf("%c",&ch);
	printf("Enter num to print given character: ");
	scanf("%d",&num);
	
	while(i<num)
	{
		printf("%c",ch);
		i++;
	}
	printf("\n");
	return 0;
}
