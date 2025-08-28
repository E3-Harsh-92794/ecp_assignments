#include<stdio.h>

int main()
{
	int num,a,b,c,d;
	printf("Enter 4 Digit Number: ");
	scanf("%d",&num);
	a=num/1000;
	b=(num%1000)/100;
	c=((num%1000)%100)/10;
	d=(((num%1000)%100)%10);
	printf("Face Value of Number:%d%3d%3d%3d\n",a,b,c,d);
	printf("Thousnds place:%d\n",a);
	printf("Hundred place:%d\n",b);
	printf("Tenth place:%d\n",c);
	printf("Unit place:%d\n",d);
	printf("Reverse Order of Number:%d%3d%3d%3d\n",d,c,b,a);

	return 0;

}
