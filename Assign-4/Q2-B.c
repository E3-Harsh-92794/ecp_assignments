//Que b2
#include<stdio.h>
int main()
{
int mypow,base=2,index=3;
mypow=pow_rec(base,index);
printf("pow=%d",mypow);

return 0;
}

int pow_rec(int b,int i)
{
if(i==0)
return 1;
else if(i==1)
return b;
else
return b*pow_rec(b,i-1);

}
