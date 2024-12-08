#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int d;
    int k[10]={0};

    scanf("%d %d %d",&a,&b,&c);

    d=a*b*c;
    while(d>0)
    {
        k[d%10]++;
        d/=10;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n",k[i]);
    }
}
