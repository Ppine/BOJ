#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    scanf("\n");
    char c;
    for(int i=0; i<n; i++)
    {
        scanf("%c",&c);
        cnt+=c-48;
    }
    printf("%d",cnt);
    return 0;
}