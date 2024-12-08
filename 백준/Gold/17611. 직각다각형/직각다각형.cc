#include <bits/stdc++.h>

using namespace std;

int x[100005],y[100005],ansx[1000005]={0},ansy[1000005]={0};

int main()
{
  int n,r,mx,mn;
  scanf("%d",&n);
  for(int i=0; i<n; i++)
  {
    scanf("%d %d",&x[i],&y[i]);
    x[i]+=500000;
    y[i]+=500000;
  }
  x[n]=x[0];
  y[n]=y[0];
  for(int i=0; i<n; i++)
  {
    if(x[i]==x[i+1])
    {
      mx=max(y[i],y[i+1]);
      mn=min(y[i],y[i+1]);
      ansy[mn]++;
      ansy[mx]--;
    }
    if(y[i]==y[i+1])
    {
      mx=max(x[i],x[i+1]);
      mn=min(x[i],x[i+1]);
      ansx[mn]++;
      ansx[mx]--;
    }
  }
  r=ansx[0];
  for(int i=1; i<=1000000; i++)
  {
    ansx[i]+=ansx[i-1];
    r=max(r,ansx[i]);
  }
  r=max(r,ansy[0]);
  for(int i=1; i<=1000000; i++)
  {
    ansy[i]+=ansy[i-1];
    r=max(r,ansy[i]);
  }
  printf("%d",r);
  return 0;
}
