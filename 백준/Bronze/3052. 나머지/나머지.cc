#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[42]={0};
    int k;
    int cnt=0;

    for(int i=0; i<10; i++)
    {
        scanf("%d",&k);
        a[k%42]++;
        //printf("%d\n",a[k%42]);
    }
    for(int i=0; i<42; i++)
    {
        if(a[i]>0) cnt++;
    }
    printf("%d",cnt);
    return 0;
}
