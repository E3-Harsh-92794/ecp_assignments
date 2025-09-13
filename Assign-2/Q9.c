/*
#include<stdio.h>


int main()
{
	int year, month;

	printf("Enter the Year: ");
	scanf("%d",&year);

	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("%d is a Leap Year and Contain 366 Days\n",year);
	}
	else
	{
		printf("%d is not a Leap Year and Contain 365 Days\n",year);
	}

	printf("Enter the month you want(in numbers between 1 to 12): ");
	scanf("%d",&month);

	if(month == 1||month==3||month==5||month==7||month==8||month==10||month==12)
	//if(month == 1||3||5||7||8||10||12)
	{
		printf("This month has  31 Days\n");
	}
	else if(month==2)
	{
		if(year%4==0&&year%100!=0||year%400==0)
		{
			printf("This month has 29 Days\n");
		}
		else
		{
			printf("This month has 28 Days\n");
		}

	}
	else if(month==2||month==4||month==6||month==9||month==11)
	//else if(month==2||4||6||9||11)
	{
		printf("This month has 30 Days\n");
	}
	else
		{
			printf("Enter Valid Number\n");
		}

	return 0;

}
*/


#include<stdio.h>


int main()
{
	int year, month;

	printf("Enter the Year: ");
	scanf("%d",&year);

	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("%d is a Leap Year and Contain 366 Days\n",year);
	}
	else
	{
		printf("%d is not a Leap Year and Contain 365 Days\n",year);
	}

	printf("Enter the month you want(in numbers between 1 to 12): ");
	scanf("%d",&month);

	if(month == 1)
	{
		printf("January %d has 31 Days\n",year);
	}

	else if(month == 2)
	{
		if(year%4==0&&year%100!=0||year%400==0)
		{
		    printf("February %d has 29 Days\n",year);
		}
		else
		{
			printf("February %d has 28 Days\n",year);
		}
	}

	else if(month == 3)
	{
		printf("March %d has 31 Days\n",year);
	}
	else if(month == 4)
	{
		printf("April %d has 30 Days\n",year);
	}
	else if(month == 5)
	{
		printf("May %d has 31 Days\n",year);
	}
	else if(month == 6)
	{
		printf("June %d has 30 Days\n",year);
	}
	else if(month == 7)
	{
		printf("July %d has 31 Days\n",year);
	}
	else if(month == 8)
	{
		printf("August %d has 31 Days\n",year);
	}
	else if(month == 9)
	{
		printf("September %d has 30 Days\n",year);
	}
	else if(month == 10)
	{
		printf("Octomber %d has 31 Days\n",year);
	}
	else if(month == 11)
	{
		printf("November %d has 30 Days\n",year);
	}
	else
	{
		printf("December %d has 31 Days\n",year);
	}
	return 0;

}
