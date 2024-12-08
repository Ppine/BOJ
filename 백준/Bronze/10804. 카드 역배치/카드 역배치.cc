#include <stdio.h>

using namespace std;

int main()
{
    int a[10][2],c[21],i,j,n[21],cnt,co,k;
    for(i=1; i<=20; i++)
    {
        c[i]=i;
        n[i]=i;
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<10; i++)
    {
        cnt=0;
        for(j=0; j<1; j++)
        {

            if((a[i][j+1]-a[i][j])%2==1) co=(a[i][j+1]-a[i][j]+1)/2;
            else co=(a[i][j+1]-a[i][j])/2;
            while(co>cnt)
            {
                n[a[i][j]+cnt]=c[a[i][j+1]-cnt];
                n[a[i][j+1]-cnt]=c[a[i][j]+cnt];
                cnt++;
                for(k=1; k<=20; k++)
                {
                    c[k]=n[k];
                }
            }
        }
    }
    for(i=1; i<=20;i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
}
