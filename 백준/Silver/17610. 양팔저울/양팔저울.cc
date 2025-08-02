#include<bits/stdc++.h>

int b[200000*15],chk[200000*15];

int main()
{
	int k,i,s=0,j,cnt=0,n;
	int a[15]={0};
	scanf("%d",&k);
	for(i=0; i<k; i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	chk[0]=b[0]=1;
	for(i=0; i<k; i++)
	{
		for(j=0; j<=s; j++)
		{
			if(b[j]==1)
			{
				chk[j+a[i]]=1;
				n=abs(j-a[i]);
				chk[n]=1;
			}
		}
		for(j=0; j<=s; j++)
		{
			if(chk[j]==1)
			{
				b[j]=1;
			}
		}
	}
	for(i=0; i<=s; i++)
	{
		if(chk[i]==0) cnt++;
	}
	printf("%d",cnt);
	
	
}