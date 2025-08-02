#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], av=0, mo, i,cnt,j,t=0,m;
    for(i=0; i<10;i++)
    {
        scanf("%d",&a[i]);
        av+=a[i];
    }
    av/=10;
    for(i=0; i<10; i++)
    {
        mo=a[i];
        cnt=1;
        for(j=0; j<10; j++)
        {
            if(mo==a[i+j])
            {
                cnt++;
            }
        }
        if(cnt>t)
        {
            t=cnt;
            m=a[i];
        }
    }
    printf("\n%d\n%d",av,m);
    return 0;
}
