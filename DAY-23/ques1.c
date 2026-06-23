#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,j,flag=0;
    printf("Enter the string");
    scanf("%s",str);
    int len=strlen(str)-1;
    for(i=0;i<len;i++)
    {
        int c=0;
        for(j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
               c++;
            }
        }
        if(c==1)
        {
            printf("First non repeating character is %c ",str[i]);
            flag=1;
            break;
        }
    }
     if(!flag)
        {
            printf("All characters are repeating");
        }
    
    return 0;
}