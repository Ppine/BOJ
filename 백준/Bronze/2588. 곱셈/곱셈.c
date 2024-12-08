#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m[5]={0},i,M=0;
    scanf("%d",&n);
    for(i=1; i<=3; i++)
    {
        scanf("%1d",&m[i]);
    }
    for(i=3; i>=1; i--)
    {
        printf("%d\n",n*m[i]);
    }
    for(i=1; i<=3; i++)
    {
        M=M*10+m[i];
    }
    printf("%d",n*M);
    return 0;
}
