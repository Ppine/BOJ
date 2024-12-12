#include <stdio.h>
#include <string.h>


int main()
{
    int queue[10005];
    int n,size=0;
    int front=0,back=0;
    char order[15];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",order);
        if(strcmp(order,"push")==0)
        {
            scanf("%d",&queue[back]);
            size++;
            back++;
        }
        if(strcmp(order,"pop")==0)
        {
            if(size==0) printf("-1\n");
            else
            {
                printf("%d\n",queue[front]);
                front++;
                size--;
                if(size==0)
                {
                    front=back=0;
                }
            }
        }
        if(strcmp(order,"size")==0) printf("%d\n",size);
        if(strcmp(order,"empty")==0)
        {
            if(size==0) printf("1\n");
            else printf("0\n");
        }
        if(strcmp(order,"front")==0)
        {
            if(size==0) printf("-1\n");
            else printf("%d\n",queue[front]);
        }
        if(strcmp(order,"back")==0)
        {
            if(size==0) printf("-1\n");
            else printf("%d\n",queue[back-1]);
        }
    }
}