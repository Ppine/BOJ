#include <stdio.h>

using namespace std;

int main()
{
    int q[105],r=0,f=0;
    int com,n,i,a,b,x,cnt=0;
    int chk[105]={0};
    int map[105][105]={0};
    scanf("%d",&com);
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        map[a][b]=1;
        map[b][a]=1;
    }

    q[r++]=1; chk[1]=1;

    while(r!=f)
    {
        x=q[f++];

        for(i=1; i<=com; i++)
        {
            if(map[x][i]==1 && chk[i]==0)
            {
                chk[i]=1; q[r++]=i;
                cnt++;
            }
        }
    }
    printf("%d",cnt);

    return 0;
}
