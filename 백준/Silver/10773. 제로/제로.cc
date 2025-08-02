#include <bits/stdc++.h>

using namespace std;

stack <int> s;

int main()
{
	int k,n,sum=0;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&n);
		if(n==0) s.pop();
		else s.push(n);		
	}
		
	while(!s.empty())
	{
		sum+=s.top();
		s.pop();
	}
	
	printf("%d",sum);
	return 0;
}