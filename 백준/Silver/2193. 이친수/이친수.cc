#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    long long p[95];
    p[0]=0;
    p[1]=1;
    for(int i=2; i<=n; i++)
    {
        p[i] = p[i-1]+ p[i-2];
    }
    printf("%lld",p[n]);
    return 0;
}
