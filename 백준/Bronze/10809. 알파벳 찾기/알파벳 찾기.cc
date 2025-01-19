#include <bits/stdc++.h>

using namespace std;

int main()
{
    char n[105];
    scanf("%s",n);
    int loc[26];
    for(int i=0; i<26; i++) loc[i]=-1;

    for(int i=0; i<strlen(n); i++)
    {
        if(loc[n[i]-97]==-1) loc[n[i]-97] = i;
    }
    for(int i=0; i<26; i++) printf("%d ",loc[i]);


    return 0;
}