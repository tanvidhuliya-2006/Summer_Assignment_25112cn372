#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float tax;
    float netSalary;
};
struct Employee employees[50];
int empCount=0;
float calculateNetSalary(float basic,float hra,float da,float tax)
{
    return (basic+hra+da)-tax;
}
void addEmployee()
{
    if(empCount>=50)
    {
        printf("\nCannot add more employees!Limit reached\n");
        return 0;
    }

struct Employee e;
printf("\nEnter Employee ID: ");
scanf("%d",&e.id);
printf("Enter name");
getchar();
fgets(e.name,sizeof(e.name),stdin);
printf("Enter basic salary");
scanf("%f",&e.basicSalary);
printf("Enter HRA");
scanf("%f",&e.hra);
printf("Enter DA");
scanf("%f",&e.da);
printf("Enter tax deduction");
scanf("%f",&e.tax);

e.netSalary=calculateNetSalary(e.basicSalary,e.hra,e.da,e.tax);
employees[empCount]=e;
empCount++;
printf("\n Employee added successfully\n");

}
void displayEmployees()
{
    if(empCount==0)
    {
        printf("\nNo employees to display\n");
        return;
    }
    printf("\n%s %s %s %s %s %s %s\n","ID","Name","Basic","HRA","DA","Tax","Net");
    for(int i=0;i<empCount;i++)
    {
        printf("%d %s %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",employees[i].id,employees[i].name,employees[i].basicSalary,employees[i].hra,employees[i].da,employees[i].tax,employees[i].netSalary);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\nSalary Management System\n");
        printf("1.Add Employee\n");
        printf("2.View All Employees\n");
        printf("3.Exit\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        if(choice==1)
        {
            addEmployee();
        }
        else if(choice==2)
        {
            displayEmployees();
        }
        else if(choice==3)
        {
            printf("\nExit\n");
            break;
        }
        else
        {
            printf("\n Invalid choicr\n");
        }
    }
    return 0;
}


