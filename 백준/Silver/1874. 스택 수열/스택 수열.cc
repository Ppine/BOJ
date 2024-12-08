#include <bits/stdc++.h>

using namespace std;

stack <int> s;
char ans[200005];
int main()
{
	int n,k[100005],m=0,cnt=0;
	scanf("%d",&n);
	s.push(++m); ans[cnt]='+'; cnt++;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
	
	for(int i=0;i<n;)
	{
		if(!s.empty() && s.top()==k[i])
		{
			ans[cnt]='-'; cnt++; s.pop(); i++;
		}
		else if(m<n) 
		{
			s.push(++m); ans[cnt]='+'; cnt++; 
			
		}
		else break;		
	}
	
	if(!s.empty() || m<n) { printf("NO"); return 0; }
	for(int i=0; i<cnt; i++) printf("%c\n",ans[i]);
	
	return 0;
}