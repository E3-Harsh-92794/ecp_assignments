#include<stdio.h>


int main()
{
	int num;
	int temp;
	int rem,rev;

	printf("Enter the 5 digit number: ");
	scanf("%d",&num);

	temp = num;
    
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;


	rem=num%10;
	rev=rev*10+rem;
	num=num/10;

	rem=num%10;
	rev=rev*10+rem;
	num=num/10;

	rem=num%10;
	rev=rev*10+rem;
	num=num/10;

	rem=num%10;
	rev=rev*10+rem;
	num=num/10;

    printf("rev:%d\n",rev);


	if(temp == rev)
	{
		printf("Entered Number is Palindrome\n");
	}
	else
	{
		printf("Entered Number is not Palindrome\n");
	}

	return 0;

}
