#include<bits/stdc++.h>

using namespace std;

typedef pair<int,pair<int,int> > ppp;
priority_queue<ppp,vector<ppp>,greater<ppp> > pqin,pqout;

int id[100005],w[100005];

int main()
{
	int n,k,i,j=1;
	long long r=0;
	scanf("%d %d",&n,&k);
	for(int i=1; i<=n; i++) scanf("%d %d",&id[i],&w[i]);
	if(n>k)
	{
		for(i=1;i<=k;i++) pqin.push(make_pair(w[i],make_pair(i,id[i])));
		for(; i<=n; i++)
		{
			pqin.push(make_pair(pqin.top().first+w[i],make_pair(pqin.top().second.first,id[i])));
			pqout.push(make_pair(pqin.top().first,make_pair(k+1-pqin.top().second.first,pqin.top().second.second)));
			pqin.pop();
		}
		for(i=1;i<=k;i++)
		{
			pqout.push(make_pair(pqin.top().first,make_pair(k+1-pqin.top().second.first,pqin.top().second.second)));
			pqin.pop();
		}
	}
	else
	{
		for(i=1;i<=n;i++) pqin.push(make_pair(w[i],make_pair(i,id[i])));
		for(i=1;i<=n;i++)
		{
			pqout.push(make_pair(pqin.top().first,make_pair(k+1-pqin.top().second.first,pqin.top().second.second)));
			pqin.pop();
		}		
	}
	for(int i=1; i<=n; i++)
	{
		r+=(long long)i*pqout.top().second.second;
		pqout.pop();
	}
	printf("%lld",r);
}