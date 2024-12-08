#include<bits/stdc++.h>

using namespace std;

int n;
int arr[1001];
bool visited[1001];
void dfs(int node)
{

        visited[node] = true;
        if (!visited[arr[node]]) dfs(arr[node]);
}
int main()
{

        scanf("\n");
        int t;
        scanf("%d",&t);
        for (int i=0; i<t; i++)
        {
             memset(visited, false, sizeof(visited));
             scanf("%d",&n);
             for (int j=1; j<=n; j++) scanf("%d",&arr[j]);
             int cnt = 0;
             for (int j=1; j<=n; j++) //컴포넌트 개수
             if (!visited[j])
             {
                 dfs(j);
                 cnt++;
             }
             printf("%d\n",cnt);
        }
        return 0;
}

