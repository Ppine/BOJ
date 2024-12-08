#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sugar[5005];
    int n;
    scanf("%d",&n);
    for(int i=0; i<=n; i++) sugar[i]=99999999;
    sugar[3] = sugar[5] = 1;
    for(int i=6; i<=n; i++)
        sugar[i]=min(sugar[i-3],sugar[i-5])+1;
    if(sugar[n]<99999999) printf("%d",sugar[n]);
    else printf("-1");



    return 0;
}
