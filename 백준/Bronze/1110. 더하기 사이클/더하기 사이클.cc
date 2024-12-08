#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    int N;
    int cnt=0;
    int num;
    N=n;
    while(1)
    {
        if(cnt!=0) n=num;
        a=n/10;
        b=n%10;
        c=a+b;
        d=c%10;
        num=(b*10)+d;
        //printf("a %d b %d c %d d %d num %d\n",a,b,c,d,num);
        cnt++;
        //printf("n=%d num=%d\n",n,num);
        if(N==num) break;
    }
    printf("%d",cnt);

    return 0;

}
