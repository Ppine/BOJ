#include <bits/stdc++.h>

using namespace std;

int n,m,cnt=0;
int mp[1005][1005]={0};
bool visit[1005] ={false};

void dfs(int a)
{
    visit[a]=true;
    for(int i=1; i<=n; i++)
    {
        if(mp[a][i] && visit[i]==false) dfs(i);
        if(i==n) return;
    }
}

int main()
{
    int u,v;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d",&u,&v);
        mp[u][v]=1;
        mp[v][u]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            dfs(i);
            cnt++;
        }
    }
    printf("%d",cnt);

    return 0;
}
