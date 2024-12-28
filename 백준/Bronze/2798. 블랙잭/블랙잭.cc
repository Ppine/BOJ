#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int num[105];
    int sum;
    for(int i=0; i<n; i++) scanf("%d",&num[i]);
    int max=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                sum = num[i]+num[j]+num[k];
                if(sum<=m && sum>=max) max = sum;
                sum=0;
            }
        }
    }

    printf("%d",max);

    return 0;
}