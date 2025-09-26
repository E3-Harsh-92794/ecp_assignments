//Que c9
#include<stdio.h>

int cal(int num1,int num2,int *res);

int main()
{
int num1=10,num2=0,res,flag=0;
flag=cal(num1,num2,&res);
if(flag==0)
printf("res:%d\n",res);
else
printf("Error\n");


return 0;
}




int cal(int num1,int num2,int *res)
{
typedef enum {ADD=1,SUB,MUL,DIV}CHOICE;
CHOICE ch;
printf("Choose Your Option:\n");
scanf("%d",&ch);
switch(ch)
{
case ADD:*res=num1+num2;
	return 0;
case SUB:*res=num1-num2;
	return 0;
case MUL:*res=(num1)*(num2);
	return 0;
case DIV:if(num2==0)
	 return 1;
	else
	*res=num1/num2;
	return 0;
default:printf("\n");
	return 0;

}









}
