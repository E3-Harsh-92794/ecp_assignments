//Que3
#include<stdio.h>
int cal(int,int,char);
int main()
{

int n1,n2,res;
char ch;
printf("Enter n1 and n2 and operator \n");
scanf("%d%d %c",&n1,&n2,&ch);
res=cal(n1,n2,ch);

return 0;
}

int cal(int n1,int n2,char ch)
{
int res;
switch(ch)
{
 case '+': res=n1+n2;
         printf("Addition:%d",res);
         break;

 case '-': res=n1-n2;
         printf("Substraction:%d",res);
         break;

 case '*': res=n1*n2;
         printf("Multiplication:%d",res);
         break;

 case '/': res=n1/n2;
         printf("Division:%d",res);
         break;
 default:printf("\n");



}
}
