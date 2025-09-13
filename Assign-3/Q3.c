#include<stdio.h>

int main()
{
	int num,rev=0,rem,sum=0,temp,arm_sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	temp=num;

	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		rev=rev*10+rem;
		arm_sum=arm_sum+(rem*rem*rem);
		num=num/10;
	}
	


	printf("Resverse Number:%d \n",rev);
	printf("Sum:%d \n",sum);
	if(rev==temp)
	{
		printf("%d is a palindrome number\n",temp);
	
	}
	else
	{
		printf("%d is not palindrome number\n",temp);
	}


	if(arm_sum==temp)
	{
		printf("%d is a armstrong number\n",temp);
	
	}
	else
	{
		printf("%d is not armstrong number\n",temp);
	}
	
	return 0;
	
}
