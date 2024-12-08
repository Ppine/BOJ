#include <stdio.h>

using namespace std;

int chk[1005],n;
int map[1005][1005];

void DFS(int x)
{
    int i;
    if(chk[x]==1) return;
    chk[x]=1; printf("%d ",x);
    for(i=1; i<=n; i++)
    {
        if(map[x][i]==1 && chk[i]==0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int q[1005],r=0,f=0;
    int i,x,m,v,a,b;

    scanf("%d %d %d",&n,&m,&v);

    for(i=1; i<=m; i++)
    {
        scanf("%d %d",&a,&b);
        map[a][b]=1;
        map[b][a]=1;
    }

    DFS(v);
    printf("\n");
    for(i=1; i<=n; i++) chk[i]=0;

    q[r++]=v;
    chk[v]=1; printf("%d ",v);

    while(r!=f)
    {
        x=q[f++];
        for(i=1; i<=n; i++)
        {
            if(map[x][i]==1 && chk[i]==0)
            {
                chk[i]=1; q[r++]=i;
                printf("%d ",i);
            }
        }
    }

    return 0;
}
