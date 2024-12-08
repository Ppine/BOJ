#include <bits/stdc++.h>

using namespace std;

int c,l,chk[16];
char s[16],pw[16];

void F(int a,int b)
{
    int i;
    if(a==l)
    {
        int ja=0, mo=0;

        for(i=0; i<l; i++)
        {
            if(pw[i]=='a' || pw[i]=='e' || pw[i]=='i' || pw[i]=='o' || pw[i]=='u') mo++;
            else ja++;
        }
        if(ja>=2 && mo>=1)
        {
            for(i=0; i<l; i++)
            {
                printf("%c",pw[i]);
            }
            printf("\n");
        }
        return;
    }
    for(i=b; i<c; i++)
    {
        if(chk[i]==0)
        {
            pw[a]=s[i];
            chk[i]=1;
            F(a+1,i);
            chk[i]=0;
        }
    }
}

int main()
{
    scanf("%d %d",&l,&c);
    for(int i=0; i<c; i++)
    {
        scanf(" %c",&s[i]);
    }

    sort(s,s+c);

    F(0,0);

    return 0;
}
