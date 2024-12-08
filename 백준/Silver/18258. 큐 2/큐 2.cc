#include <stdio.h>
#include <string.h>
#include <stack>
#include <queue>

using namespace std;

queue <int> q;

int main()
{
    int n,k,i;
    char a[10];

    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",a);
        if(strcmp(a,"push")==0)
        {
            scanf("%d",&k);
            q.push(k);
        }
        else if(strcmp(a,"pop")==0)
        {
            if(q.empty()) printf("-1\n");
            else 
			{
				printf("%d\n",q.front());
				q.pop();
			}
        }
        else if(strcmp(a,"size")==0)
        {
            printf("%d\n",q.size());
        }
        else if(strcmp(a,"empty")==0)
        {
            printf("%d\n",q.empty());
        }
        else if(strcmp(a,"front")==0)
        {
            if(q.empty()) printf("-1\n");
            else printf("%d\n",q.front());
        }
        else if(strcmp(a,"back")==0)
        {
        	if(q.empty()) printf("-1\n");
        	else printf("%d\n",q.back());
		}
    }
    return 0;
}
