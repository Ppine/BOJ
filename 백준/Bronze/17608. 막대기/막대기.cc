#include <bits/stdc++.h>

int main()
{
	int n,max=0,cnt=0;
	int h[100005];
	scanf("%d",&n);
	for(int i=n-1; i>=0; i--) scanf("%d",&h[i]);
	for(int i=0; i<n; i++)
	{
		if(h[i]>max)
		{
			max=h[i];
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}