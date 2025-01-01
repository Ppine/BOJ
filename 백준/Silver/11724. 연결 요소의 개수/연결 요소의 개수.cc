#include <bits/stdc++.h>

using namespace std;

int n,m;
int node[1005][1005]={0,};
bool chk[1005] = {false};


void dfs(int a)
{
    chk[a] = true;
    for(int i=1; i<=n; i++)
    {
        if(node[a][i] && chk[i]==false) dfs(i);
    }

}

int main()
{
    int a,b;
    int cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d",&a,&b);
        node[a][b]=1;
        node[b][a]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(!chk[i])
        {
            dfs(i);
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}