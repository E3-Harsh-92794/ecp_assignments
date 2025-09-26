//Que2
#include<stdio.h>
int num_pow(int,int);

int main()
{
	int base,index;
	printf("Enter base and index\n");
	scanf("%d%d",&base,&index);
	num_pow(base,index);


	return 0;
}

int num_pow(int base,int index)
{
	int i=1,res=1;
	for(i=1;i<=index;i++)
	{
		res=base*res;

	}
	printf("Power:%d",res);




}
