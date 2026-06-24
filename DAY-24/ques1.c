#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],lshift[50];
    int i,j;
    printf("Enter the string");
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(i==0)
        {
            lshift[len-1]=str[i];
        }
        else
        {
            lshift[i-1]=str[i];
        }
    }
    lshift[len]='\0';
    printf("String rotation is %s ",lshift);
    return 0;
}