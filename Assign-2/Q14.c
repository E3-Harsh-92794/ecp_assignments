#include<stdio.h>


int main()
{
	int empid,depNo;
	char desig;

	printf("Enter the Employee ID: ");
	scanf("%d",&empid);

	printf("Enter the Department No: ");
	scanf("%d",&depNo);

	printf("Enter the Designation Code: \n'M' for Manager \n'S'for Supervisor\n's'for Security Officer \n'C' for Clerk\n ::::::::::::::::::::::::");
	scanf("%*c%c",&desig);
	
	printf("Employee with employee id %d is working in",empid);

	switch(depNo)
	{
		case 10:
			printf("\"Marketing\"");
		break;
		
		case 20:
			printf("\"Management\"");
		break;

		case 30:
			printf("\"Sales\"");
		break;

		case 40:
			printf("\"Designing\"");
		break;
	}
	
	printf("department as");

	switch(desig)
	{
		case 'M':
			printf("\"Manager\"\n");
		break;

		case 'S':
			printf("\"Supervisor\"\n");
		break;

		case 's':
			printf("\"Security Officer\"\n");
		break;

		case 'C':
			printf("\"Clerk\"\n");
        break;
	}

	return 0;

}
