//12
#include<stdio.h>
int main()
{
int base,index,res=1,i=1;
printf("Enter base and index\n");
scanf("%d%d",&base,&index);
for(i=1;i<=index;i++)
{
res=res*base;

}
printf("Power :%d",res);

return 0;


}
