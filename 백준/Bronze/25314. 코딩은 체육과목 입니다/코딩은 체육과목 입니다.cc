#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0)
    {
        for(int i=0; i<a/4; i++)
        {
            printf("long ");
        }
        printf("int");
        return 0;
    }
    else
    {
        for(int i=0; i<a/4 +1; i++)
        {
            printf("long ");
        }
        printf("int");
        return 0;
    }
    return 0;
}
