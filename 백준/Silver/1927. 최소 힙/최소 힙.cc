#include <bits/stdc++.h>

using namespace std;

priority_queue <int> q;
int k[100005];

int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++) 
	{
		scanf("%d",&k[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		if(k[i]!=0)
		{
			q.push(k[i]*-1);
		}
		else 
		{
			if(q.empty()) printf("0\n");
			else 
			{
				printf("%d\n",q.top()*-1);
				q.pop();
			}
		}		
	}
	return 0;
}