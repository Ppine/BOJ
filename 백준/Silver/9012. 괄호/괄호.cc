#include <bits/stdc++.h>

using namespace std;

void check(char s[55])
{
    int sum = 0;
    int chk = 0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='(')
        {
            sum++;
            chk++;
        }
        else sum--;
        if(sum<0) break;

    }
    if(sum != 0) printf("NO\n");
    else printf("YES\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    char s[55];
    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
        check(s);
    }
    return 0;
}