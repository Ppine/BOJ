#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long a,b;

    for(int i=0; i<n; i++)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",((a+b-1)*(a+b)*(a+b)/2));
    }
    return 0;
}