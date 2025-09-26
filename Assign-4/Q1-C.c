//Que C7
#include<stdio.h>
int num1=10,num2=20;
int sum,mul;
int calculate(int op1,int op2,int *pmul)
{
int sum;
*pmul=op1*op2;
sum=op1+op2;
return sum;

}
int main()
{
sum=calculate(num1,num2,&mul);
printf("%d+%d=%d\n",num1,num2,sum);
printf("%d*%d=%d\n",num1,num2,mul);
return 0;
}
/*
without using global variable
#include<stdio.h>
int calculate(int op1,int op2,int *pmul)
{int sum;
*pmul=op1*op2;
sum=op1+op2;
return sum;

}
int main(void)
{
int num1=10,num2=20;
int sum,mul;
sum=calculate(num1,num2,&mul);
printf("%d+%d=%d\n",num1,num2,sum);
printf("%d*%d=%d\n",num1,num2,mul);
return 0;

}
*/
