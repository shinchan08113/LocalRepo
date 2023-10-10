#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int rollNo;
    int marks;
    char gender[10];
}v1;
int main()
{
    printf("enter the record of student\n");
    printf("enter name\n");
    gets(v1.name);
    printf("enter the rollno\n");
    scanf("%d",&v1.rollNo);
    printf("enter the marks\n");
    scanf("%d",&v1.marks);
    printf("enter gender\n");
    gets(v1.gender);
    printf("display record\n");
    printf("name of student\n");
    puts(v1.name);
    printf("rollNo of student\n");
    printf("%d",v1.rollNo);
    printf("marks of student\n");
    printf("%d",v1.marks);
    printf("gender of student\n");
    puts(v1.gender);
}