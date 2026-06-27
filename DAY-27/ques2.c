#include<stdio.h>
#include<string.h>
struct employee
{
    char name[100];
    int id;
    int age;
    char depart[100];
    float sal;
}
emp[100];
void main()
{
    int i,n;
    printf("Enter the number of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name of employee");
        gets(emp[i].name);
        printf("Enter the employee id");
        scanf("%d",&emp[i].id);
        printf("Enter the age of employee");
        scanf("%d",&emp[i].age);
        printf("Enter the department");
        gets(emp[i].depart);
        printf("Enter the salary");
        scanf("%f",&emp[i].sal);    
    }
    for(i=0;i<n;i++)
    {
        printf("Employee details are: ");
        printf("NAME %s ",emp[i].name);
        printf("ID %d ",emp[i].id);
        printf("AGE %d ",emp[i].age);
        printf("DEPARTMENT %s ",emp[i].depart);
        printf("SALARY %f ",emp[i].sal);
    }
    getch();
}


