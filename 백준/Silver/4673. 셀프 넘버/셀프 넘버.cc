#include <bits/stdc++.h>

using namespace std;

int k[10001];

int d(int n)
{
    int sum=n;
    while(true)
    {
        if(n==0) break;
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    for(int i=1; i<=10000; i++)
    {
        k[i]=1;
    }
    for(int i=1; i<=10000; i++)
    {
        k[d(i)]=0;
    }
    for(int i=1; i<=10000; i++)
    {
        if(k[i]==1)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}