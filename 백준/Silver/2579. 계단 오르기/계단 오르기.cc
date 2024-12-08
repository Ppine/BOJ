#include <bits/stdc++.h>

using namespace std;

int data[305],sum[305];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++) scanf("%d",&data[i]);
    sum[1]=data[1];
    sum[2]=data[1]+data[2];
    for(i=3; i<=n; i++)
    {
        if(data[i]+data[i-1]+sum[i-3]<data[i]+sum[i-2]) sum[i]=data[i]+sum[i-2];
        else sum[i]=data[i]+data[i-1]+sum[i-3];
    }
    printf("%d",sum[n]);
    return 0;
}
