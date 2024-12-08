#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bingo[5][5],n[26];
    int i,j,p,k,cnt=0,sum=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)  scanf("%d",&bingo[i][j]);
    }
    for(p=1; p<=25; p++)
    {
        scanf("%d",&k);
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(bingo[i][j]==k)
                bingo[i][j]=0;
            }
        }
        cnt=0;
        for(i=0; i<5; i++)
        {
            sum=0;
            for(j=0; j<5; j++) if(bingo[i][j]==0) sum++;
            if(sum==5) cnt++;
        }
        for(i=0; i<5; i++)
        {
            sum=0;
            for(j=0; j<5; j++) if(bingo[j][i]==0) sum++;
            if(sum==5) cnt++;
        }
        sum=0;
        for(i=0; i<5; i++) if(bingo[i][i]==0) sum++;            
        if(sum==5) cnt++;
        sum=0;
        for(i=0; i<5; i++) if(bingo[i][4-i]==0) sum++;
        if(sum==5) cnt++;
        if(cnt>=3)
        {
            printf("%d",p);
            return 0;
        }
    }
    return 0;
}
