#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max=0,c,n[10];
    for(i=0; i<9; i++)
    {
        scanf("%d",&n[i]);
        if(n[i]>max)
        {
            max=n[i];
            c=i;
        }
    }
    printf("%d\n%d",max,c+1);
    return 0;
}
