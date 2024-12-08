#include <stdio.h>

int main()
{
    int price;
    scanf("%d",&price);
    int n;
    scanf("%d",&n);
    int count, p;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&count,&p);
        price-=count*p;
    }
    if(price==0) printf("Yes");
    else printf("No");
    return 0;
}

