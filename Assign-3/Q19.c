//Que19

#include<stdio.h>
int main()
{
	int i,j,num1,num2;
        printf("Enter range\n");
        scanf("%d%d",&num1,&num2);
         
	for(i=1;i<=10;i++)
	{
          for(j=num1;j<=num2;j++)
           {
            printf("%d  ",i*j); 
            
           }
  
        printf("\n");
	}

        
return 0;

}
