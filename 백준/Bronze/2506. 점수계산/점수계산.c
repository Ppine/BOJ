#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[100],sc=0,cnt=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            cnt++;
            if(a[i-1]==1)
            {
                sc+=cnt;
            }
            else
            {
                sc+=1;
            }
        }
        if(a[i]==0)
        {
            cnt=0;
        }

    }
    printf("%d",sc);

    return 0;
}
