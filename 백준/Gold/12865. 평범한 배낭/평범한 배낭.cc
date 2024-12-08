#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	int d[101][100001];
	scanf("%d %d",&n,&k);

	int N[101][2];

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<2; j++)
		{
			scanf("%d",&N[i][j]);
		}
	}
	for(int i=1; i<=n; i++)
	{
		int w=N[i][0]; int v=N[i][1];
		for(int j=0; j<=k; j++)
		{
			if(j<N[i][0]) d[i][j]=d[i-1][j];
			else d[i][j]=max(d[i-1][j],d[i-1][j-w]+v);
		}
	}

	printf("%d",d[n][k]);



	return 0;
}
