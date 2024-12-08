#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N,M,ans=1,i;
    int m[45]={0},n[45]={0};
    scanf("%d %d",&N,&M);
    for(i=1; i<=M; i++)  scanf("%d",&m[i]);
    if(M==N)
    {
        printf("1");
        return 0;
    }
    n[1]=n[2]=1;
    for(i=3; i<=N+1; i++)n[i]=n[i-1]+n[i-2];

    for(i=1; i<=M; i++)   ans=ans*(n[m[i]-m[i-1]]);

    if(N<=3)
    {
        ans=ans*(N-m[M]);
    }
    else
    {
        if(N!=m[M])  ans=ans*(n[N-m[M]+1]);
    }

    printf("%d",ans);


    return 0;
}
