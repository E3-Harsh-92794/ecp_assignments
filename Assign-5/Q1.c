//Que1

#include<stdio.h>

int avg_sub(int *arr[]);
int main()
{
	int arr[5];
	float res;
	printf("Enter marks of 5 subjects\n");
	for(int i=0;i<5;i++)
	{
	printf("Subject%d:",i);
	scanf("%d",&arr[i]);

	}
	printf("Marks:\n");
	for(int i=0;i<5;i++)
	printf("Subject%d:%d\n",i,arr[i]);
	printf("\n");
	res = avg_sub(&arr);
//	printf("Average :%.2f",res);

	return 0;
}

int avg_sub(int *arr[])
{
	int sum=0;
	float avg,res;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	avg=(sum)/5;
	return printf("Average:%d",avg);
}

