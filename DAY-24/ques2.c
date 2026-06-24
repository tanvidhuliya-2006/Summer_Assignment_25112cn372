#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],comp[50];
    printf("Enter the string");
    scanf("%s",str);
    int len=strlen(str);
    int i=0;
    int j=0;
    while(str[i] != '\0')
    {
        int c=1;

        while(str[i]==str[i+c])
        {
            c++;
        }
        comp[j++]=str[i];
        if(c>=10)
        {
            comp[j++]=(c/10)+'0';
            comp[j++]=(c%10)+'0';
        }
        else
        {
            comp[j++]=c+'0';
        }
        i+= c;
    }
        comp[j]='\0';
        printf("compressed string is %s\n",comp);
        return 0;
    
}