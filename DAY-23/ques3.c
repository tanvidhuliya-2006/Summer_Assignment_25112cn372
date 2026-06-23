#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50],str2[50];
    int i,j;
    printf("Enter the string 1");
    scanf("%s",str1);
    printf("Enter the string 2");
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(i=0;i<len1-1;i++)
    {
        for(j=0;j<len1-i-1;j++)
        {
            if(str1[j]>str1[j+1])
            {
                char temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;
            }
        }
    }
    for(i=0;i<len2-1;i++)
    {
        for(j=0;j<len2-i-1;j++)
        {
            if(str2[j]>str2[j+1])
            {
                char temp=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=temp;
            }
        }
    }
    if(strcmp(str1,str2)==0)
    {
        printf("Strings are anagram");
    }
    else
    {
        printf("Strings are not anagram");
    }
    return 0;

}