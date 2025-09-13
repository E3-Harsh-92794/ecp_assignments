#include<stdio.h>

/*
int main()
{
    int year;
	printf("Enter the Year: ");
	scanf("%d",&year);

	if(year%400==0)
	{
		printf("%d is a Leap Year => 366 Days\n",year);
	}
	else if(year%100==0)
	{
		printf("%d is not a Leap Year => 365 Days \n",year);
	}
	else if(year%4==0)
	{
		printf("%d is a Leap Year => 366 Days\n",year);
	}
	else
	{
		printf("%d is not a Leap Year => 365 Days\n",year);
	}

	return 0;

}
*/
/*
#include<stdio.h>

int main()
{
	int year;
	printf("Enter the Year: ");
	scanf("%d",&year);

	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d is a Leap Year => 366 Days\n",year);
	}
	else
	{
		printf("%d is not a leap year => 365 Days\n",year);
	}

	return 0;
}

*/

#include<stdio.h>

int main()
{
	int year;
	printf("Enter the Year: ");
	scanf("%d",&year);

	(year%4==0&&year%100!=0||year%400==0)?printf("%d is a Leap Year => 366 Days\n",year):printf("%d is not a Leap Year => 365 Days\n",year);

	return 0;
}
