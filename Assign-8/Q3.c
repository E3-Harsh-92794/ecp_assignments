#include <stdio.h>

struct Student
 {
    int roll;
    char name[50];
    float marks;
};

void acceptStudents(struct Student s[], int n)
 {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void printStudents(struct Student s[], int n)
 {
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

int main()
 {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    acceptStudents(s, n);
    printStudents(s, n);
    return 0;
}

