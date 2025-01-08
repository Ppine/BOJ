#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,cnt;
    char num[20];
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        cnt = 0;
        scanf("%s",num);
        for(int j=0; j<16; j++)
        {
            num[j]-=48;
            if(j%2==0)
            {
                num[j] *=2;
                if(num[j]>=10) num[j] = num[j]/10 + num[j]%10;
            }
            cnt += num[j];
        }
        if(cnt%10==0) printf("T\n");
        else printf("F\n");
    }
    return 0;
}