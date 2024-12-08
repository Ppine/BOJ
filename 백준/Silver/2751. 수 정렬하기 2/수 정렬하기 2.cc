#include <bits/stdc++.h>

using namespace std;

int a[10000000];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0; i<n; i++) printf("%d\n",a[i]);
    
    return 0;
}
