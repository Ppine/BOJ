#include <bits/stdc++.h>

using namespace std;

float k[1005];

int main()
{
    int n;
    float m=-1;
    float sum=0;
    float avg;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%f",&k[i]);
        m=max(m,k[i]);
    }
    for(int i=0; i<n; i++)
    {
        k[i]=k[i]/m*100;
        sum+=k[i];
    }
    avg=sum/n;
    printf("%f",avg);
    return 0;
}
