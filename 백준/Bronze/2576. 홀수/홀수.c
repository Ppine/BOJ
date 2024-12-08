#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,min=999,sum=0,n,cnt=0;
    for(i=0; i<7; i++)
    {
        scanf("%d",&n);
        if(n%2!=0)
        {
            if(min>n) min=n;
            sum+=n;
            cnt++;
        }
    }
    if(cnt==0)
    {
        printf("-1");
        return 0;
    }
    else
    {
        printf("%d\n%d",sum,min);
    }
    return 0;
}
