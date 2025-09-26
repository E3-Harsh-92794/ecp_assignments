//Que10
#include <stdio.h>

int isLeap(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int daysInMonth(int month, int year)
{
    switch(month)
{
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeap(year) ? 29 : 28;
        default:
            return -1;
    }
}

int main()
 {
    int year, month;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if(isLeap(year))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is not a Leap Year.\n", year);

    int days = daysInMonth(month, year);
    if(days != -1)
        printf("Number of days in month %d = %d\n", month, days);
    else
        printf("Invalid month entered!\n");

    return 0;
}

