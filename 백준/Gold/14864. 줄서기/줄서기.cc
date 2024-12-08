#include <bits/stdc++.h>

using namespace std;

int s[100005],ns[100005];

int main()
{
    int N,M,i,a,b;
    scanf("%d %d",&N,&M);
    if(N==1)
    {
        printf("-1");
        return 0;
    }
    for(i=1; i<=N; i++) ns[i]=i;
    for(i=1; i<=M; i++)
    {
        scanf("%d %d",&a,&b);
        s[a]++;
        s[b]--;
    }
    for(i=1; i<=N; i++)
    {
        s[i]+=ns[i];
        ns[i]=0;
    }
    for(i=1; i<=N; i++) ns[s[i]]++;
    for(i=1; i<=N; i++)
    {
        if(ns[i]==0)
        {
            printf("-1");
            return 0;
        }
    }
    for(i=1; i<=N; i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}
