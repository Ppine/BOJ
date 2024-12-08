#include <bits/stdc++.h>

using namespace std;

int a[1005];

int main()
{
    int c;
    scanf("%d",&c);
    for(int i=0; i<c; i++)
    {
        int n;
        int cnt=0;
        float sum=0;
        float ans;
        scanf("%d",&n);
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        float avg=sum/n;
        for(int j=0; j<n; j++)
        {
            if(a[j]>avg) cnt++;
        }
        ans=100/(float)n*cnt;
        printf("%.3f%\n",ans);
    }
    return 0;
}
