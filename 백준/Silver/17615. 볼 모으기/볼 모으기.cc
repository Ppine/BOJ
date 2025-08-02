#include <bits/stdc++.h>

using namespace std;

char ball[500005];

int main()
{
	int n,rcnt=0,bcnt=0,ans,cnt=0;
	scanf("%d",&n);
	scanf("%s",&ball);
	for(int i=0; i<n; i++)
	{
		if(ball[i]=='B') bcnt++;
		else rcnt++;
	}
	ans=min(rcnt,bcnt);
	for(int i=0; i<n; i++)
	{
		if(ball[i]!=ball[0]) break;
		cnt++;
	}
	if(ball[0]=='R') ans=min(ans,rcnt-cnt);
	else ans=min(ans,bcnt-cnt);
	cnt=0;
	for(int i=n-1; i>=0; i--)
	{
		if(ball[n-1]!=ball[i]) break;
		cnt++;
	}
	if(ball[n-1]=='R') ans=min(ans,rcnt-cnt);
	else ans=min(ans,bcnt-cnt);
	printf("%d",ans);
	return 0;
}