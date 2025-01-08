#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        cin >> str;
        if(str.size()>=6 && str.size()<=9) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}