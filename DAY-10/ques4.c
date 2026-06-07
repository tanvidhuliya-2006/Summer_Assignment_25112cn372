#include <stdio.h>
int main()
{
    char i,j,k,l;
    for(i='A';i<='E';i++)
    {
        for(j=1;j<='E'-i;j++)
        {
            printf(" ");
        }
        for(k='A';k<=i;k++)
        {
            printf("%c",k);
        }
        for(l=i-1;l>='A';l--)
        {
            printf("%c",l);
        }
        printf("\n");
    }
    return 0;
}