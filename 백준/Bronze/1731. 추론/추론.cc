#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int num[50];
    int a,chk=0;;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    if((num[1]*2)==(num[0]+num[2])) 
    {
        a=num[1]-num[0];
        chk=1;
    }
    else
    {
        a=num[1]/num[0];
        chk=0;
    }
    if(chk==1) printf("%d",num[n-1]+a);
    else printf("%d",num[n-1]*a);
    return 0;
}