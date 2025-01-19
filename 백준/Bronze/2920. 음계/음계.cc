#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[10];
    int chk=0;
    for(int i=0; i<8; i++) scanf("%d",&n[i]);
    for(int i=0; i<7; i++)
    {
        if(n[i]-n[i+1]==1) chk=1;// descending
        else if(n[i]-n[i+1]==-1) chk=2; // ascending
        else
        {
            printf("mixed");
            return 0;
        }
    }
    if(chk==1) printf("descending");
    else printf("ascending");


    return 0;
}