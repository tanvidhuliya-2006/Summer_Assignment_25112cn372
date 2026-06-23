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
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
        {
            printf("First repeating character is %c ",str[i]);
            flag=1;
            break;
        }
    }
    if(flag) break;
}
    if(!flag)
    {
        printf("All characters are non repeating");
    }
    return 0;
}