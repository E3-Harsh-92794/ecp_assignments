//Que13
#include<stdio.h>
int main()
{
int num,t1=0,t2=1,next,i=1;
printf("Enter the numbers of terms\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
next=t1+t2;
t1=t2;
printf("%d\t",next);
t2=next;

}
printf("\n");

return 0;

}
