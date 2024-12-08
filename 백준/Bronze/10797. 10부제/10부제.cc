#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,cnt=0,i;
    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        scanf("%d",&m);
        if(m==n) cnt++;
    }
    printf("%d",cnt);
    return 0;
}
