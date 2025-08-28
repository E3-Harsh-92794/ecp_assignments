#include<stdio.h>

int main()
{
	char ch;
	printf("Enter your Character: ");
	scanf("%c",&ch);

	printf("Decimal: %d\n",ch);
	printf("Octal: %o\n",ch);
	printf("Hex: %x\n",ch);

	int ascii;
	printf("Enter the your ASCII value: ");
	scanf("%d",&ascii);
        
	printf("chracter for entered value: %c\n",ascii);



	return 0;

}
