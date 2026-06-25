#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    char name[n][50],temp[50];
    printf("Enter the number of names:");
    scanf("%d",&n);
    printf("Enter the names");
    for(i=0;i<n;i++)
    {
       scanf("%s",name[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(name[j],name[j+1]) >0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    printf("\nNames in alphabetical order ");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
    
}