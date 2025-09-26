//Que16
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,guess,i=1;
	printf("Enter a number\n");
	//scanf("%d"&num);
	while(i<=10)
	{
		//printf("Enter Your Number\n");
		scanf("%d",&num);
		guess=rand();
		if(num==guess)
		{
			printf("Congrats You Won the Game\n");
			break;
		}
		else
			printf("Try Again...\n");
	i++;
	}
              printf("Only 10 Chances are valid\n");

	return 0;
}
