#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int cnt=0;
    scanf("%d",&n);
    int stack[10005]={0};
    char order[10];

    for(int i=0; i<n; i++)
    {
        scanf("%s",order);
        if(strcmp(order,"push")==0)
        {
            scanf("%d",&stack[cnt]);
            cnt++;
        }
        if(strcmp(order,"top")==0)
        {
            if(cnt==0) printf("-1\n");
            else printf("%d\n",stack[cnt-1]);
        }
        if(strcmp(order,"size")==0) printf("%d\n",cnt);
        if(strcmp(order,"empty")==0)
        {
            if(cnt==0) printf("1\n");
            else printf("0\n");
        }
        if(strcmp(order,"pop")==0)
        {
            if(cnt==0) printf("-1\n");
            else
            {
                printf("%d\n",stack[cnt-1]);
                stack[cnt-1]=0;
                cnt--;
            }
        }
    }

    return 0;
}