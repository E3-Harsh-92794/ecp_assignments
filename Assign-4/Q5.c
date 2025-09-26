//Que5
#include<stdio.h>

void printchar(char,int);

int main()
{
int num;
char ch;
printf("Enter a Character and number of times\n");
scanf("%c %d",&ch,&num);
return 0;

}

void printchar(char ch,int num)
{
for(int i=1;i<=num;i++)
{

printf("%c",ch);

}



}
