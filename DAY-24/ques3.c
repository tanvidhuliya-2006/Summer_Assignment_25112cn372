#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[50];
    int i,wlen=0,maxlen=0,currentstart=0,maxstart=0;
    printf("Enter the string");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(i=0;i<=len;i++)
    {
        if(isalpha(str[i]))
        {
            if(wlen==0)
            {
            currentstart=i;
            wlen++;
            }
        }
        else
        {
            if(wlen>maxlen)
            {
            maxlen=wlen;
            maxstart=currentstart;
            }
            wlen=0;
        }
    }
    printf("Longest word is ");
    for(i=maxstart;i<maxstart+maxlen;i++)
    {
        printf("%c",str[i]);
    }
    printf("\nlength is %d\n",maxlen);
    return 0;

}