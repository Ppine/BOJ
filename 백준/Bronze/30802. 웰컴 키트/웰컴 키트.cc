#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int size[6];
    int t,p;
    int cnt=0;
    scanf("%d",&n);
    for(int i=0; i<6; i++) scanf("%d",&size[i]);
    scanf("%d %d",&t,&p);
    for(int i=0; i<6; i++) cnt+=((size[i]+t-1)/t);

    printf("%d\n",cnt);
    printf("%d %d",n/p,n%p);
    return 0;
}