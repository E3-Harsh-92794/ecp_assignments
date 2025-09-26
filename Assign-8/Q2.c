#include<stdio.h>
typedef struct student
{
int rollno;
char name[20];
float marks;

}stud;

void accept_student(stud *s);
void print_student(stud s);


int main(void)
{
stud s;
accept_student(&s);
print_student(s);

return 0;
}


void accept_student(stud *s)
{
printf("Enter students details(roll no,name,marks)\n");
scanf("%d %s %f",&s->rollno,&s->name,&s->marks);

}


void print_student(stud s)
{
printf("Details of students Roll no : %d,Name: %s,Marks: %.2f \n", s.rollno,s.name,s.marks);


}
