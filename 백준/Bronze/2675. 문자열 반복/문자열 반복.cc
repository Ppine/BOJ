#include <bits/stdc++.h>

using namespace std;

void repeat(int n, char s[25])
{
    for(int i=0; i<strlen(s); i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}

int main()
{
    char s[25];
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int m;
        scanf("%d", &m);
        scanf("%s", s);
        repeat(m,s);
    }

    return 0;
}