#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

int lcm(int a, int b)
{
    return a/gcd(a,b)*b;
}

int main()
{
    int a[20001];
    bool chk[20001];
    int n,j,i,cnt,l=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++) scanf("%d",&a[i]);
    for(i=1; i<=n; i++)
    {
        if(!chk[i])
        {
            chk[i]=1;
            j=a[i];
            cnt=1;
            while(i!=j)
            {
                j=a[j];
                cnt++;
                chk[j]=1;
            }
            l=lcm(l,cnt);
        }
    }
    printf("%d",l);
    return 0;
}