#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(true)
    {
        scanf("%d",&n);
        if(n==0) return 0;

        int temp = n;
        int k=0;
        while(n>0)
        {
            k=k*10+n%10;
            n/=10;
        }
        if(k==temp) printf("yes\n");
        else printf("no\n");
    }
}