#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("%d\n",a+b-c);

    if(b==1000) a=a*10000+b;
    else if(b>=100 && b<1000) a=a*1000+b;
    else if(b>=10 && b<100) a=a*100+b;
    else a=a*10+b;

    printf("%d",a-c);


    return 0;
}