#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int res=1;
    scanf("%d %d",&n,&k);
    for(int i=n; i>=k+1; i--) res*=i;
    for(int i=2; i<=n-k; i++) res/=i;
    printf("%d",res);
}