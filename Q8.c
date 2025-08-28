#include<stdio.h>

int main()
{
	int n1,n2,n3;
	float avg;
	printf("Enter Three Numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);

	avg=(n1+n2+n3)/3.00;
    
	printf("Average of %d %d %d this Three Numbers:%.2f\n",n1,n2,n3,avg);




	return 0;

}
