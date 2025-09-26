#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void searchByRoll(struct Student s[], int n, int roll)
 {
    for (int i = 0; i < n; i++)
 {
        if (s[i].roll == roll) 
{
            printf("Found -> Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            return;
        }
    }
    printf("Student with Roll %d not found!\n", roll);
}

void searchByName(struct Student s[], int n, char name[])
 {
    for (int i = 0; i < n; i++)
 {
        if (strcmp(s[i].name, name) == 0)
 {
            printf("Found -> Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            return;
        }
    }
    printf("Student with Name %s not found!\n", name);
}

int main() 
{
    struct Student s[3] = 
{
        {1, "Amit", 78.5},
        {2, "Ravi", 82.0},
        {3, "Neha", 91.2}
    };

    searchByRoll(s, 3, 2);
    searchByName(s, 3, "Neha");
    return 0;
}

