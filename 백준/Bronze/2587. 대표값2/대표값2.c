#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n[6]={0},sum=0,t;
    for(i=1; i<=5; i++)
    {
        scanf("%d",&n[i]);
        sum+=n[i];
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(n[j]>n[j+1])
            {
                t=n[j+1];
                n[j+1]=n[j];
                n[j]=t;
            }
        }
    }
    printf("%d\n%d",sum/5,n[3]);
    return 0;
}
