#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dal[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int a,b;
    int start[100005]={0},end[100005]={0},n,i,j,max,cnt=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        for(j=0;j<a; j++)
        {
            start[i]+=dal[j];
        }
        start[i]+=b;
        scanf("%d %d",&a,&b);
        for(j=0;j<a; j++)
        {
            end[i]+=dal[j];
        }
        end[i]+=b;
    }
    for(i=60;i<=334; i++)
    {
        max=0;
        for(j=0; j<n;j++)
        {
            if(start[j]<=i&&end[j]>i)
            {
                if(end[j]>max) max=end[j];
            }
        }
        if(max==0)
        {
            printf("0");
            return 0;
        }
        cnt++;
        i=max-1;
    }
    printf("%d",cnt);
    return 0;
}