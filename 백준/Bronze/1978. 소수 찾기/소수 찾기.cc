#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int cnt=0,chk;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&m);
        chk=0;
        for(int j=1; j<=sqrt(m); j++)
        {
            if(m%j==0&&m!=1) chk++;
        }
        if(chk==1) cnt++;
    }
    printf("%d",cnt);
}