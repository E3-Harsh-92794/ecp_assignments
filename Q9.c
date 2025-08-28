#include<stdio.h>

int main()
{
   
	float num,C,F;
	printf("Enter the Temperature Value in Fahrenheit: ");
	scanf("%f",&num);

	C=(num-32)*5/9;

 	printf("Temperature in Degree Celsius: %.2f\n",C);

	F=(C*9/5)+32;

	printf("Temperature in Fahrenheit:%.2f\n",F);



	return 0;

}
