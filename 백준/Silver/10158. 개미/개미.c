#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,h,p,q,t;
    scanf("%d %d",&w,&h);
    scanf("%d %d",&p,&q);
    scanf("%d",&t);
    if(((t+p)/w)%2==0)
    printf("%d ",(t+p)%w);
    else printf("%d ",w-((t+p)%w));

    if(((t+q)/h)%2==0)
    printf("%d",(t+q)%h);
    else printf("%d",h-((t+q)%h));

    return 0;
}
