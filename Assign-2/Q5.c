/*
#include<stdio.h>


int main()
{
	int n1,n2,n3;
	printf("Enter Three Numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);

	if (n1>n2)
	{
		if(n1>n3)
			printf("%d is the Greatest\n",n1);
		else
			printf("%d is the Greatest\n",n3);
	}
	else
	{
		if(n2>n3)
			printf("%d is the Greatest\n",n2);
		else
			printf("%d is the Greatest\n",n3);
	}
	

	return 0;

}
*/

#include<stdio.h>


int main()
{
	int n1,n2,n3;

	printf("Enter Three Number: ");
	scanf("%d%d%d",&n1,&n2,&n3);


	(n1>n2)?(n1>n3?printf("%d is the Greatest\n",n1):printf("%d is the Greatest\n",n3)):(n2>n3?printf("%d is the Greatest\n",n2):printf("%d is the Greatest\n",n3));

			return 0;
}

