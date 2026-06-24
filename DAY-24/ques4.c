#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,j;
    printf("Enter the string");
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<len-1;k++)
                {
                    str[k]=str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    printf("String after removing duplicate is ");
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}