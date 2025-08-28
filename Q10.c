#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,Peri,A,s,d;
	printf("Enter the Value of Three Sides of Triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	
	Peri=(a+b+c);
	s=(a+b+c)/2;
	d=s*(s-a)*(s-b)*(s-c);
	A= sqrt(d);

	printf("Perimeter of triangle:%d\n",Peri );
	printf("Area of Triangle:%d\n",A);





	return 0;

}
