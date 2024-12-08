#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cnt=0,i,j;
    for(i=0; i<3; i++)
    {
        cnt=0;
        for(j=0; j<4; j++)
        {
            scanf("%d",&n);
            if(n==0) cnt++;
        }
        if(cnt==0) printf("E\n");
        if(cnt==1) printf("A\n");
        if(cnt==2) printf("B\n");
        if(cnt==3) printf("C\n");
        if(cnt==4) printf("D\n");
    }
    return 0;
}
