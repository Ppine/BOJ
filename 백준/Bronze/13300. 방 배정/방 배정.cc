#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,k;
  int cnt=0;
  cin >> n>>k;
  int g[6],b[6];
  fill(g,g+6,0);
  fill(b,b+6,0);
  int s,y;
  for(int i=0; i<n; i++){
    cin >> s >> y;
    if(s==0) g[y-1]++; else b[y-1]++;
  }

  for(int i=0; i<6; i++){
    if(g[i]%k==0){
      cnt+=g[i]/k;
    }
    else cnt+=g[i]/k +1;
  }
  for(int i=0; i<6; i++){
    if(b[i]%k==0){
      cnt+=b[i]/k;
    }
    else cnt+=b[i]/k+1;
  }
  cout << cnt;
  return 0;
}