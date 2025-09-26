#include <stdio.h>

struct SchoolStudent 
{
    unsigned int roll;
    char name[50];
    unsigned int standard : 4; 
    unsigned int gender   : 1; 
    unsigned int age      : 6; 
};

int main() 
{
    struct SchoolStudent s[3];

    for (int i = 0; i < 3; i++) 
{
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll: ");
        scanf("%u", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Standard (1-12): ");
        scanf("%u", &s[i].standard);
        printf("Gender (0=Male, 1=Female): ");
        scanf("%u", &s[i].gender);
        printf("Age: ");
        scanf("%u", &s[i].age);
    }

    printf("\n--- School Student Information ---\n");
    for (int i = 0; i < 3; i++) 
{
        printf("Roll: %u | Name: %s | Std: %u | Gender: %s | Age: %u\n",
               s[i].roll, s[i].name, s[i].standard,
               s[i].gender ? "Female" : "Male",
               s[i].age);
    }

    return 0;
}

