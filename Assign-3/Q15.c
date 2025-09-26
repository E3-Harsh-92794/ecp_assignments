//Que 15
#include<stdio.h>
int main()
{
do
{
int n1,n2,res;
typedef enum choice {EXIT,ADD,SUB,MUL,DIV}CHOICE;
CHOICE ch;
printf("Enter two numbers:\n");
scanf("%d%d",&n1,&n2);
printf("0.EXIT\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
printf("Enter Choice:\n");
scanf("%d",&ch);

switch(ch)
{
 case EXIT:printf("You are EXIT\n");
          break;
 case ADD:res=n1+n2;
          printf("Addition:%d\n",res);
          break;
 case SUB:res=n1-n2;
          printf("Substraction:%d\n",res);
          break;
case MUL:res=n1*n2;
         printf("Multiplication:%d\n",res);
         break;
case DIV:res=n1/n2;
         printf("Division:%d\n",res);
         break;
default:printf("Invalid Option Choosed\n");
}

}
while(1);



return 0;


}
