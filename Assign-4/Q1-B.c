//Que b1
#include<stdio.h>
int main()
{
int fact,num=5;
fact=fact_rec(num);
printf("fact:%d",fact);

return 0;
}

int fact_rec(int num)
{
if(num==0||num==1)
return 1;
else
return num*fact_rec(num-1);


}
