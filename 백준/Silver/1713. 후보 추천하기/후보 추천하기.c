#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sa[25]={0},ch[25]={0},old[25]={0};
    int i,j,k,n,a,min,p,cnt;

    scanf("%d %d",&n,&k);

    for(i=1; i<=k; i++)
    {
        scanf("%d",&a);
        for(j=1; j<=n; j++)
        {
            if(sa[j]==0) { sa[j]=a; ch[j]=1; old[j]=i; break; }
            else if(sa[j]==a) { ch[j]++; break; }
        }

        min=9999;
        if(j>n)
        {
            for(j=1; j<=n; j++)
            {
                if(ch[j]<min) { min=ch[j]; p=j;}
                else if(ch[j]==min && old[p]>old[j]) { min=ch[j]; p=j;}
            }

            sa[p]=a; ch[p]=1; old[p]=i;
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(sa[i]>sa[j])
            {
                p=sa[j];
                sa[j]= sa[i];
                sa[i]=p;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        if(sa[i]!=0) printf("%d ",sa[i]);
    }

    return 0;
}
