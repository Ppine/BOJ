#include <bits/stdc++.h>

int main()
{
	int t,chk,left,right,l,r;
	char a[100005];
	scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
		chk=0;
		scanf(" %s",&a);
		right=strlen(a)-1;
		left=0;
		while(left<=right)
		{
			if(a[left]==a[right])
			{
				left++;
				right--;
			}
			else break;
		}
		l=left+1;
		r=right;
		while(l<=r)
		{
			if(a[l]==a[r])
			{
				l++;
				r--;
				chk=1;
			}
			else
			{
				chk=2;
				break;
			}
		}
		if(chk==2)
		{
			l=left;
			r=right-1;
			while(l<=r)
			{
				if(a[l]==a[r])
				{
					l++;
					r--;
					chk=1;
				}
				else
				{
					chk=2;
					break;
				}
			}
		}
		if(chk==0) printf("0\n");
		else if(chk==1) printf("1\n");
		else printf("2\n");				
	}
	return 0;
}