#include <bits/stdc++.h>

using namespace std;

struct word
{
    char a[105];
    int len;
}data[20005];

bool comp(const word &A, const word &B)
{
    if(A.len==B.len)
    {
        if(strcmp(A.a,B.a)<0) return 1;
        else return 0;
    }
    return A.len<B.len;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("\n");
        scanf("%s",data[i].a);
        data[i].len=strlen(data[i].a);
    }
    sort(data,data+n,comp);
    for(i=0; i<n; i++)
    {
        if(i>0 && strcmp(data[i].a,data[i-1].a)==0) continue;
        printf("%s\n",data[i].a);
    }
    return 0;
}
