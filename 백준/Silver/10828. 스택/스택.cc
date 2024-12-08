#include <stdio.h>
#include <string.h>

using namespace std;

int stack[10005], top=-1;

int main()
{
    int n,k,i;
    char a[10];

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("\n"); scanf("%s",a);
        if(strcmp(a,"push")==0)
        {
            scanf("%d",&k);
            stack[++top]=k;
        }
        else if(strcmp(a,"pop")==0)
        {
            if(top<0) printf("-1\n");
            else printf("%d\n",stack[top--]);
        }
        else if(strcmp(a,"size")==0)
        {
            if(top<0) printf("0\n");
            else printf("%d\n",top+1);
        }
        else if(strcmp(a,"empty")==0)
        {
            if(top<0) printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(a,"top")==0)
        {
            if(top<0) printf("-1\n");
            else printf("%d\n",stack[top]);
        }
    }
    return 0;
}
