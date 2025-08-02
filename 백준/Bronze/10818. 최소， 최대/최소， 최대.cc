#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int mn,mx;
    int a;
    mn=10000001;
    mx=-10000001;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>=mx) mx=a;
        if(a<=mn) mn=a;
    }
    printf("%d %d",mn,mx);
}
