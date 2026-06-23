#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,j;
    int max=0,c;
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
    if(c>max)
    {
        max=c;
    }
}
        printf("Maximum occurance character is %c ",str[i]);
        return 0;
}