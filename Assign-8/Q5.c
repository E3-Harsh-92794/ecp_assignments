#include <stdio.h>
#include <string.h>

struct Student
 {
    int roll;
    char name[50];
    float marks;
};

void sortByRoll(struct Student s[], int n)
 {
    for (int i = 0; i < n - 1; i++)
 {
        for (int j = i + 1; j < n; j++)
 {
            if (s[i].roll > s[j].roll)
 {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void sortByName(struct Student s[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
{
        for (int j = i + 1; j < n; j++) 
{
            if (strcmp(s[i].name, s[j].name) > 0)
 {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void printStudents(struct Student s[], int n) 
{
    for (int i = 0; i < n; i++) 
{
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student s[3] = 
{
        {3, "Neha", 91.2},
        {1, "Amit", 78.5},
        {2, "Ravi", 82.0}
    };

    printf("\nSorted by Roll:\n");
    sortByRoll(s, 3);
    printStudents(s, 3);

    printf("\nSorted by Name:\n");
    sortByName(s, 3);
    printStudents(s, 3);

    return 0;
}

