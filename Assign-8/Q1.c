#include<stdio.h>
typedef struct student
{
int rollno;
char name[20];
float marks;

}stud;
int main()
{
stud s;
printf("Enter Students Details(Roll no,Name,Marks\n)");
scanf("%d%s%f",&s.rollno,&s.name,&s.marks);
printf("Details of students:Roll No=%d,Name=%s,Marks=%.2f",s.rollno,s.name,s.marks);



return 0;
}
