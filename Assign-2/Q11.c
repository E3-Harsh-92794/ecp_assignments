#include<stdio.h>


int main()
{
    
	int x,y;
	printf("Enter the value of 'x' coordinate: ");
	scanf("%d",&x);
	printf("Enter the value of 'y' coordinate: ");
	scanf("%d",&y);


	if(x>0&&y> 0)
	{
		printf("Point is in 1st quadrant\n");
	}
	else if(x<0&&y>0)
	{
		printf("Point is in 2nd quadrant\n");
	}
	else if(x<0&&y<0)
	{
		printf("Point is in 3rd quadrant\n");
	}
	else if(x>0&&y<0)
	{
		printf("Point is in 4th quadrant\n");
	}
	else if(x==0&&y!=0)
	{
		printf("Point is on Y-axis\n");
	}
	else if(x!=0&&y==0)
	{
		printf("Point is on X-axis\n");
	}
	else if(x==0&&y==0)
	{
		printf("Point is at Origin\n");
	}
	else
	{
		printf("Enter Valid Co-ordinates\n");
	}


	return 0;

}
