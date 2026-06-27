#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[30];
    float per;
}
record[30];
void main()
{
    int i,n;
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the student id");
        scanf("%d",&record[i].id);
        printf("Enter the student name");
        gets(record[i].name);
        printf("Enter the percentage of student");
        scanf("%f",&record[i].per);
    }
    for(i=0;i<n;i++)
    {
        printf("Student details are: ");
        printf(" ID %d ",record[i].id);
        printf(" NAME %s ",record[i].name);
        printf("PERCENTAGE %f ",record[i].per);
    }
    getch();
}