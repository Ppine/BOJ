#include <bits/stdc++.h>
#include <cstring>
int main()
{
    int n;
    scanf("%d",&n);
    char a[55][55];
    char b[55]={};
    for(int i=0; i<n; i++)
        scanf("%s",a[i]);
    for(int i=0; i<strlen(*a); i++)
    {
        b[i]=a[0][i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<strlen(*a); j++ )
        {
            if(b[j]==a[i][j])
            {
                b[j]=a[i][j];
            }
            else
            {
                b[j]='?';
            }
        }
    }
    printf("%s",b);
    
    return 0;
}