#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

void addStudent() 
{
    FILE *fp = fopen("student.dat", "ab");
    struct Student s;
    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}

void displayStudents() 
{
    FILE *fp = fopen("student.dat", "rb");
    struct Student s;
    while (fread(&s, sizeof(s), 1, fp)) 
{
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
}

void searchByRoll(int roll) 
{
    FILE *fp = fopen("student.dat", "rb");
    struct Student s;
    while (fread(&s, sizeof(s), 1, fp)) 
{
        if (s.roll == roll) 
{
            printf("Found -> Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
            fclose(fp);
            return;
        }
    }
    printf("Student not found!\n");
    fclose(fp);
}

void searchByName(char name[]) 
{
    FILE *fp = fopen("student.dat", "rb");
    struct Student s;
    while (fread(&s, sizeof(s), 1, fp)) 
{
        if (strcmp(s.name, name) == 0) 
{
            printf("Found -> Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
            fclose(fp);
            return;
        }
    }
    printf("Student not found!\n");
    fclose(fp);
}

void modifyStudent(int roll) {
    FILE *fp = fopen("student.dat", "rb+");
    struct Student s;
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Enter new Name and Marks: ");
            scanf("%s %f", s.name, &s.marks);
            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            fclose(fp);
            printf("Record updated!\n");
            return;
        }
    }
    printf("Student not found!\n");
    fclose(fp);
}

void deleteStudent(int roll) {
    FILE *fp = fopen("student.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Student s;
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll != roll) {
            fwrite(&s, sizeof(s), 1, temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("student.dat");
    rename("temp.dat", "student.dat");
    printf("Record deleted!\n");
}

int main() 
{
    int choice, roll;
    char name[50];
    do {
        printf("\n--- Student Database Menu ---\n");
        printf("1. Add Student\n2. Display All\n3. Search by Roll\n4. Search by Name\n5. Modify Student\n6. Delete Student\n7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: printf("Enter roll: "); scanf("%d", &roll); searchByRoll(roll); break;
            case 4: printf("Enter name: "); scanf("%s", name); searchByName(name); break;
            case 5: printf("Enter roll to modify: "); scanf("%d", &roll); modifyStudent(roll); break;
            case 6: printf("Enter roll to delete: "); scanf("%d", &roll); deleteStudent(roll); break;
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}

