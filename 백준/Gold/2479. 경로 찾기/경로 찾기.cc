#include <stdio.h>

using namespace std;

int map[1005][1005];
int chk[1005]={0}, a[1005][35],min[1005],road[1005],result[1005];
int main()
{
    int i,j,p,cnt,n,k,s,e;
    
    int q[1005],r=0,f=0,x;

    scanf("%d %d",&n,&k);
    for(i=1; i<=n; i++)
    {
        min[i]=9999;
        for(j=0; j<k; j++)
        {
            scanf("%1d",&a[i][j]);
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            cnt=0;
            for(p=0;p<k;p++)
            {
                if(a[i][p]!=a[j][p]) cnt++;
            }

            if(cnt==1)
            {
                map[i][j]=map[j][i]=1;
            }
        }
    }

    scanf("%d %d",&s,&e);

    q[r++]=s; min[s]=0; road[s]=0;

    while(r!=f)
    {
        x=q[f++];
        if(x==e) break;
        for(i=1; i<=n; i++)
        {
            if(map[x][i]==1 && min[i]>min[x]+1)
            {
                min[i]=min[x]+1;
                road[i]=x;
                q[r++]=i;
            }
        }
    }
    if(x!=e)
    {
        printf("%d",-1);
    }
    else
    {
        k=0;
        result[k++]=e;

        i=road[e];

        for(;;)
        {
            result[k++]=i;
            if(i==s) break;
            i=road[i];
        }

        for(i=k-1;i>=0;i--)
        {
            printf("%d ",result[i]);
        }
    }

    return 0;
}
