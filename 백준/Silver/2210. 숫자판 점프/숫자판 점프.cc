#include <stdio.h>
#include <stdlib.h>

using namespace std;

int map[6][6],chk[1000001],cnt=0,s;

void F(int x, int y, int k)
{
    if(x<1 || x>5 || y<1 || y>5) return;
    if(k>6)
    {
        if(chk[s]==0)
        {
            chk[s]=1;
            cnt++;
        }
        return;
    }
    s=s*10+map[x][y];
    F(x+1,y,k+1);
    F(x-1,y,k+1);
    F(x,y-1,k+1);
    F(x,y+1,k+1);
    s/=10;
}

int main()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&map[i][j]);
        }
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            F(i,j,1);
        }
    }

    printf("%d",cnt);
    return 0;
}
