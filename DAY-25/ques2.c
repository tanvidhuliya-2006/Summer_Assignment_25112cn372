#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50],st2[50];
    int i,j;
    printf("Enter the string in 1");
    scanf("%s",st1);
    printf("Enter the string in 2");
    scanf("%s",st2);
    int c1[26]={0},c2[26]={0};
    for(i=0;i<strlen(st1);i++)
    {
        if(st1[i]>='a' && st1[i]<='z')
        {
            c1[st1[i]-'a']++;
        }
    }
    for(i=0;i<strlen(st2);i++)
    {
        if(st2[i]>='a' && st2[i]<='z')
        {
            c2[st2[i]-'a']++;
        }
    }
    printf("commom characters are:");
    for(i=0;i<26;i++)
    {
        if(c1[i]>0 && c2[i]>0)
        {
            int mincount;
            if(c1[i]<c2[i])
            {
                mincount=c1[i];
            }
            else
            {
                 mincount=c2[i];
            }
            for(int j=0;j<mincount;j++)
            {
                printf("%c",i+'a'); 
            }           
        }
    }
    printf("\n");
    return 0;
}