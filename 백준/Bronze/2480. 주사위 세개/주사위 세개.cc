#include <stdio.h>

int main()
{
    int a[3];
    int max=0;
    int money;
    
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]==a[1]&&a[1]==a[2])
    {
        money = 10000+a[0]*1000;
        printf("%d",money);
        return 0;
    }
    else if(a[0]-a[1]==0 || a[1]-a[2]==0)
    {
        money =1000+100*a[1];
        printf("%d",money);
        return 0;
    }
    else if(a[0]-a[2]==0)
    {
        money = 1000+100*a[0];
        printf("%d",money);
        return 0;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            if(max<a[i])
                max=a[i];
        }
    }
    money=max*100;
    printf("%d",money);
    return 0;
}
