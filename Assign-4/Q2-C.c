//Que c8
#include<stdio.h>

void swap(int*,int*);

int main()
{
	int num1=10,num2=20;
	printf("Before  swapping:%d,%d\n",num1,num2);
	swap(&num1,&num2);
	printf("After swapping:%d,%d\n",num1,num2);
	return 0;
}

void swap(int *pnum1 , int *pnum2)
{
	int temp;
	temp=*pnum1;
	*pnum1=*pnum2;
	*pnum2=temp;

}
