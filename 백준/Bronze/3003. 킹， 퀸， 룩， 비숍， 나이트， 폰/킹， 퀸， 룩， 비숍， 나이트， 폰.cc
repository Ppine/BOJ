#include <stdio.h>

int main()
{
    int chess[6]={1,1,2,2,2,8};
    int c;
    for(int i=0; i<6; i++)
    {
        scanf("%d",&c);
        chess[i]-=c;
    }
    for(int i=0; i<6; i++)
        printf("%d ",chess[i]);
    
    return 0;
}
