#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g[1005], s[1005], b[1005];
    int a,i,n,k,rank=1;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        scanf("%d %d %d", &g[a], &s[a], &b[a]);
    }
    for(i=1; i<=n; i++)
    {
        if(g[k]<g[i]) rank++;
        if(g[k]==g[i] && s[k]<s[i]) rank++;
        if(g[k]==g[i] && s[k]==s[i] && b[k]<b[i]) rank++;
    }
    printf("%d",rank);

    return 0;
}
