#include<stdio.h>
#include<limits.h>

int main()
{
     printf("--------------------------------------------------------------------\n");
	 printf("%-20s %-15s %-25s %-20s \n","Data Type","Size","Format Specifier","Range");
     printf("--------------------------------------------------------------------\n");

	 printf("%-20s %-15ld %-25s %-15d %-15d\n","Char",sizeof(char),"%c",SCHAR_MIN,SCHAR_MAX);
	 printf("%-20s %-15ld %-25s %-20d %-15d\n","Unsigned_Char",sizeof(unsigned char),"%c",0,UCHAR_MAX);
	 printf("%-20s %-15ld %-25s %-20d %-15d\n","Short int",sizeof(short int),"%hd",SHRT_MIN,SHRT_MAX);
	 printf("%-20s %-15ld %-25s %-20d %-15d\n","Unsigned short int",sizeof(unsigned short int),"%hu",0,USHRT_MAX);
	 printf("%-20s %-15ld %-25s %-20d %-15d\n","Int",sizeof(int),"%d",INT_MIN,INT_MAX);
	 printf("%-20s %-15ld %-25s %-20d %-15d\n","Unsigned int",sizeof(unsigned int),"%u",0,UINT_MAX);
	 printf("%-20s %-15ld %-25s %-20ld %-15ld\n","long int",sizeof(long int),"ld",LONG_MIN,LONG_MAX);
	 printf("%-20s %-15lu %-25s %-20lu %-15lu\n","Unsigned long int ",sizeof(unsigned long int),"lu",0lu,ULONG_MAX);


	return 0;

}
