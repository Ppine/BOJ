#include<bits/stdc++.h>

using namespace std;

struct s
{
	int x1,x2,num,g;
}lo[100005];

bool F(const s &A, const s &B)
{
	return A.x1<B.x1;
}

int main()
{
	int n,q,y,s=-1,a=0,b;
	scanf("%d %d",&n,&q);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d",&lo[i].x1,&lo[i].x2,&y);
		lo[i].num=i;
	}
	
	sort(lo,lo+n,F);
	
	for(int i=0; i<n; i++)
	{		
		if(lo[i].x1>s) a++;
		lo[lo[i].num].g=a;		
		s=max(s,lo[i].x2);
	}
	
	for(int i=0; i<q; i++)
	{
		scanf("%d %d",&a,&b);
		if(lo[a-1].g==lo[b-1].g) printf("1\n");
		else printf("0\n");
	}	
	
	return 0;
}