#include <bits/stdc++.h>

using namespace std;

int a[10001];

int main()
{
    int j,n,i,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&k);
        a[k]++;
    }
    for(i=0; i<10001; i++)
    {
        if(a[i]>0)
        {
            for(j=0; j<a[i]; j++)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
