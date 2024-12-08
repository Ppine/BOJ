#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],i,ac=0,bc=0,dc;
    for(i=0; i<10; i++) scanf("%d",&a[i]);
    for(i=0; i<10; i++) scanf("%d",&b[i]);
    for(i=0; i<10; i++)
    {
        if(a[i]>b[i]) ac++;
        else if(a[i]<b[i]) bc++;
        else dc++;
    }
    if(ac>bc) printf("A");
    else if(bc>ac) printf("B");
    else if(ac==bc)printf("D");

    return 0;
}
