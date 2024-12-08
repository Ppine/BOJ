#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,n;
    for(i=0; i<5; i++)
    {
        scanf("%d",&n);
        sum=n*n+sum;
    }
    printf("%d",sum%10);
    return 0;
}
