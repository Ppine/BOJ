#include<bits/stdc++.h>

using namespace std;

long long tree[4000000];
long long n,m,k,i=2,ntree,a,b,c,j;

long long getsum(int left,int right)
{
	long long sum=0;
	left+=ntree-1,right+=ntree-1;
	while(left<=right)
	{
		if(left%2==1) sum+=tree[left];
		if(right%2==0) sum+=tree[right];
		left=(left+1)/2;
		right=(right-1)/2;
	}
	return sum;		
}

int main()
{
	scanf("%lld %lld %lld",&n,&m,&k);
	for(;;)
	{
		if(n<i) break;
		else i*=2;
	}
	ntree=i;
	for(i=ntree; i<ntree+n; i++)
	{
		scanf("%lld",&tree[i]);
	}
	for(i=ntree-1; i>=1; i--)
	{
		tree[i]=tree[i*2]+tree[i*2+1];
	}
	for(i=0; i<m+k; i++)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a==1)
		{
			j=b+ntree-1;
			tree[j]=c;
			j/=2;
			while(j>=1)
			{
				tree[j]=tree[j*2]+tree[j*2+1];
				j/=2;
			}
		}
		if(a==2)
		{
			printf("%lld\n",getsum(b,c));
		}
	}
	return 0;
}