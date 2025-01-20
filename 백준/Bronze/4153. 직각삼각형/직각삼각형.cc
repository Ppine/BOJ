#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    while(true)
    {
        int max;
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        if(a[0]==0) return 0;

        sort(a,a+3);
        // printf("%d %d %d\n",a[0],a[1],a[2]);
        
        if(pow(a[2],2)-pow(a[1],2)-pow(a[0],2)==0) printf("right\n");
        else printf("wrong\n");
    }


    return 0;
}