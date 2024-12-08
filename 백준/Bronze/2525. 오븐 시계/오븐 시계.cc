#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D;
    scanf("%d %d %d",&A,&B,&C);
    D=A*60+B+C;
    if(D>1439) D-=1440;
    printf("%d %d",D/60,D%60);
    return 0;
}
