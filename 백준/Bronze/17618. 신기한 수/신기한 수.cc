#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,sum=0,cnt=0,j;
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
  {
    sum=0;
    j=i;
    while(j!=0)
    {
      sum+=j%10;
      j/=10;
    }
    if(i%sum==0) cnt++;
  }
  printf("%d",cnt);
  return 0;
}
