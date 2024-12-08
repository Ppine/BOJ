#include <bits/stdc++.h>

using namespace std;

deque <int> q;

int main()
{
    int n,k;
    char a[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",a);
        if(strcmp(a,"push_front")==0)
        {
            scanf("%d",&k);
            q.push_front(k);
        }
        else if(strcmp(a,"push_back")==0)
        {
            scanf("%d",&k);
            q.push_back(k);
        }
        else if(strcmp(a,"pop_front")==0)
        {
            if(q.empty()) printf("-1\n");
            else
            {
                printf("%d\n",q.front());
                q.pop_front();
            }
        }
        else if(strcmp(a,"pop_back")==0)
        {
            if(q.empty()) printf("-1\n");
            else
            {
                printf("%d\n",q.back());
                q.pop_back();
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
            else
            {
                printf("%d\n",q.front());
            }
        }
        else if(strcmp(a,"back")==0)
        {
            if(q.empty()) printf("-1\n");
            else
            {
                printf("%d\n",q.back());
            }
        }
    }
    return 0;
}
