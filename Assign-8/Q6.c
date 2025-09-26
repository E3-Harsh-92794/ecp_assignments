#include <stdio.h>

struct SchoolStudent
{
    int roll;
    char name[50];
    int standard;
    union {
        char grade;
        float percentage;
    } result;
};

int main() 
{
    struct SchoolStudent s[3];

    for (int i = 0; i < 3; i++) 
{
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Standard: ");
        scanf("%d", &s[i].standard);

        if (s[i].standard <= 4) 
{
            printf("Enter Grade (A/B/C): ");
            scanf(" %c", &s[i].result.grade);
        } else 
{
            printf("Enter Percentage: ");
            scanf("%f", &s[i].result.percentage);
        }
    }

    printf("\n--- School Student Information ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll: %d | Name: %s | Std: %d | ",
               s[i].roll, s[i].name, s[i].standard);

        if (s[i].standard <= 4)
            printf("Grade: %c\n", s[i].result.grade);
        else
            printf("Percentage: %.2f\n", s[i].result.percentage);
    }

    return 0;
}

