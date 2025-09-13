#include<stdio.h>


int main()
{
	char ch;
	printf("Enter the Character: ");
	scanf("%c",&ch);

	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		printf("'%c' It is an Alphabet\n",ch);


		if(ch>=65&&ch<=90)
		{
			printf("'%c' Is an Uppercase\n",ch);
		}
		else if(ch>=97&&ch<=122)
		{
			printf("'%c' is a Lowercase\n",ch);
		}
		

	}
	else if((ch>=45) && (ch<=57))
	{
		printf("'%c' is a Digit\n",ch);
	}
	else if(ch==32)
	{
		printf("It is a space\n");
	}
	else if(ch == 9)
	{
		printf("It is a Tab\n");
	}
	else if (ch == 13)
	{
		printf("It is a Return\n");
	}
	else if(ch == 10)
	{
		printf("It is a new line");
	}

	return 0;

}
