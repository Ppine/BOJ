#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100005],n,k,hap=0,max,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<k; i++)
    {
        hap+=a[i];
    }
    max=hap;
    for(i=k; i<n; i++)
    {
        hap=hap+a[i]-a[i-k];
        if(hap>max)max=hap;
    }
    printf("%d",max);
    return 0;
}
