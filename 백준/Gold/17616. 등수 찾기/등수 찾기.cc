#include <bits/stdc++.h>

using namespace std;

vector <int> v[100005],v1[100005];
int chk[100005]={0};
int a,b,n,m,x,u,vv,cnt;

void DFS(int a)
{
	if(chk[a]==1) return;
	cnt++;
	chk[a]=1;
	
	for(int i=0; i<v[a].size(); i++)
	{
		b=v[a][i]; 
		if(chk[b]==0)
		{
			DFS(b); 		
		}
	}
}

void DFS1(int a)
{
	if(chk[a]==1) return;
	cnt++;
	chk[a]=1;	
	for(int i=0; i<v1[a].size(); i++)
	{
		b=v1[a][i]; 
		if(chk[b]==0)
		{
			DFS1(b);
		}
	}	
}


int main()
{
	scanf("%d %d %d",&n,&m,&x);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v1[b].push_back(a);
	}
	
	cnt=0;
	DFS(x);
	u=cnt;
	
	for(int i=0;i<=n;i++)
	{
		chk[i]=0;
	}
	
	cnt=0;
	DFS1(x);
	vv=cnt;
	
	printf("%d %d",vv,n-u+1);
		
    return 0;
}
