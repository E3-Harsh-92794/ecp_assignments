#include<stdio.h>


int main()
{
	int year,lp;
	printf("Enter the Year: ");
	scanf("%d",&year);

	if(year%4==0&&year%100!=0||year%400==0)
	{
		lp=1;
		printf("%d is a Leap Year\n",year);
	}
	else 
	{
		lp=0;
		printf("%d is not a Leap Year\n",year);
	}
    typedef enum MONTHS {JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEPT,OCT,NOV,DEC}mon;

	mon mn;

	printf("Enter the Month(1-12): ");
	scanf("%d",&mn);

	switch(mn)
	{
		case JAN:
			printf("Jan %d has 31 Days\n",year);
			break;
		case FEB:
			if(lp==1)
			{
				printf("Feb %d has 29 Days\n",year);
			}
			else
			{
				printf("FEB %d has 28 Days\n",year);
			}

			break;
		case MAR:
			printf("MAR %d has 31 Days\n",year);
			break;
		case APR:
			printf("APR %d has 30 Days\n",year);
		case MAY:
			printf("MAY %d has 31 Days\n",year);
		case JUN:
			printf("JUN %d has 30 Days\n",year);
			break;
		case JUL:
			printf("JUL %d has 31 Days\n",year);
			break;
		case AUG:
			printf("AUG %d has 31 Days\n",year);
			break;
		case SEPT:
			printf("SEPT %d has 30 Days\n",year);
			break;
		case OCT:
			printf("OCT %d has 31 Days\n",year);
			break;
		case NOV:
			printf("NOV %d has 30 Days\n",year);
			break;
		case DEC:
			printf("DEC %d has 31 Days\n",year);
			break;
		default:
			printf("Enter Valid Month\n");
	}
	return 0;

}
