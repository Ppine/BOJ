#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,sum=0,max=0;
    for(i=0;i<4; i++)
    {
        scanf("%d %d",&a,&b);
        sum=sum-a+b;
        if(max<sum) max=sum;
    }
    printf("%d",max);
    return 0;
}
