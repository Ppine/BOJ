#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int time[100];
    while(true)
    {
        int temp=0;
        int min=99999;
        scanf("%d",&n);
        if(n==0) return 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&time[i]);
            if(abs(time[i]-2023)<=min)
            {
                min = abs(time[i]-2023);
                temp = i;
            }
        }
        printf("%d\n",temp+1);
    }

    return 0;
}