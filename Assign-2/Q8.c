#include<stdio.h>


int main()
{
	float price,item,D_Price;
	printf("Price of 1 item is Rs 5\n");
	printf("Enter the number of Items: ");
	scanf("%f",&item);

	
    //printf("Total price Rs%d\n",price);

	if(item>=50)
	{
		printf("15%% Discount is Applied.\n");
		price=item*5;
		D_Price = price -(price*(0.15));
		printf("Amount to Pay Rs%f \n",D_Price); 
	}
	else if(item>=30)
	{
		printf("10%% Discount is Applied\n");
		price=item*5;
		D_Price = price - (price*(0.1));
		printf("Amount to Pay Rs%f \n",D_Price);
	}
	else
	{
		printf("No Disount.\n");
		price=item*5;
		printf("Amount to Pay Rs%f \n",price);
	}





	return 0;

}
