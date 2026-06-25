#include <stdio.h>
#include <string.h>
int main()
{
    char str[50][50],temp[50];
    int i,j,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strlen(str[j]) > strlen(str[j+1]))
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    printf("Sorted word lenghts is ");
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
    getch();
}