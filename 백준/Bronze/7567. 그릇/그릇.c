#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50];
    int i,h,l;
    gets(a);
    h=10;
    l = strlen(a);
    for(i=1; i<l; i++)
    {
        if(a[i-1]==a[i])
        {
            h+=5;
        }
        else
        {
            h+=10;
        }
    }
    printf("%d",h);
    return 0;
}
