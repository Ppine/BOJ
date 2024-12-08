#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,cnt=0;
	int a[7];
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		k=i;
		for(int j=0; j<7; j++)
		{
			a[j]=k%10;
			k/=10;
			if(a[j]==3 || a[j]==6 || a[j]==9) cnt++;					
		}
	}
	printf("%d",cnt);
	
	return 0;
}