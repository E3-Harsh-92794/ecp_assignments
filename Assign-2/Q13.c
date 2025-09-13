#include<stdio.h>

int main()
{
	int n1,n2,choice,ret;

	printf("Enter the 1st Number: ");
	scanf("%d",&n1);
	printf("Enter the 2nd Number: ");
	scanf("%d",&n2);

	printf("Enter your choice:\n 1.Add \n 2.Sub \n 3.Mul \n 4.Div\n:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: 
			printf("Addition is:%d\n",n1+n2);
			break;
		case 2:
			printf("Substraction is:%d\n",n1-n2);
			break;
		case 3:
			printf("Multiplication is:%d\n",n1*n2);
			break;

		case 4:
			if(n2!=0)
			{
				printf("Division is:%.2f\n",(float)n1/(float)n2);
			}
			else
			{
				printf("Error!!Denominator should not be Zero\n");
			}
			break;
		default:
			printf("Enter valid Choice");
	}

	return 0;
}

			
	


