#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    char course[50];
    int roll,math,sci,eng,hin,totalmarks;
    float per;
    int i,n;
    printf("Enter the number of students");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter student name");
    gets(name);
    printf("Enter the student course");
    gets(course);
    printf("Enter the roll number");
    scanf("%d ",&roll);
    printf("Enter the marks in maths");
    scanf("%d",&math);
    printf("Enter marks in sci");
    scanf("%d ",&sci);
    printf("Enter marks in english");
    scanf("%d ",&eng);
    printf("Enter marks in hindi");
    scanf("%d ",&hin);

   int totalmarks=math+sci+eng+hin;
   float per=(float)totalmarks/4.0;
    }
    for(i=0;i<n;i++)
    {
   printf("NAME %s ",name);
   printf("COURSE %s ",course);
   printf("ROLL NUMBER %d ",roll);
   printf("MATHS %d ",math);
   printf("SCIENCE %d ",sci);
   printf("ENGLISH %d ",eng);
   printf("HINDI %d ",hin);
   printf("TOTALMARKS %d ",totalmarks);
   printf("PERCENTAGE %f ",per);

   if(per>=80)
   {
    printf("GRADE A");
   }
   else if(per>=60)
   {
    printf("GRADE B");
   }
   else if(per>=50)
   {
    printf("GRADE C");
   }
   else if(per>=40)
   {
    printf("GRADE D");
   }
   else
   {
    printf("FAIL");
   }
}
   printf("\n");
   return 0;
}