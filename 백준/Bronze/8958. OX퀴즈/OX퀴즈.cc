#include <bits/stdc++.h>


using namespace std;

char a[85];

int main()
{
    int n;
    scanf("%d",&n);
    int len;
    int cnt,score;
    scanf("\n");
    for(int i=0; i<n; i++)
    {
        cnt=0;
        score=0;
        cin >> a;
        len=strlen(a);
        for(int j=0; j<len; j++)
        {
            if(a[j]=='O')
            {
                cnt++;
                score+=cnt;
            }
            else if(a[j]=='X')
            {
                cnt=0;
            }
        }
        printf("%d\n",score);
    }
    return 0;
}
