#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int div=1;
    scanf("%d %d",&n,&m);
    for(int i=2; i<=max(m,n); i++)
    {
        if(n%i==0 && m%i==0) div = i;
    }
    printf("%d\n%d",div,n*m/div);
}