#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,i,j,cnt=1,tile[35]={0};
    scanf("%d",&n);
    tile[0]=1;
    for(i=2; i<=n; i+=2)
    {
        tile[i]=3*tile[i-2];
        for(j=4; j<=i; j+=2)
        {
            tile[i]+=tile[i-j]*2;
        }
    }
    printf("%d",tile[n]);
    return 0;
}
