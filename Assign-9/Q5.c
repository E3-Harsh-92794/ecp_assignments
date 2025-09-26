#include <stdio.h>

struct Student
 {
    int roll;
    char name[50];
    float marks;
};

void writeStudent(struct Student s)
 {
    FILE *fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    fclose(fp);
}

void readStudent() 
{
    FILE *fp = fopen("student.txt", "r");
    struct Student s;
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks);
    printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    fclose(fp);
}

int main() 
{
    struct Student s = {1, "Amit", 85.5};
    writeStudent(s);
    readStudent();
    return 0;
}

