#include <bits/stdc++.h>

using namespace std;

int coin[11];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,k;
  cin >> n >> k;

  for(int i=0; i<n; i++) cin >> coin[i];

  int cnt=0;

  while(k>0){
    if(k>=coin[n-1]){
      k-=coin[n-1];
      cnt++;
    }
    else n--;
  }

  cout << cnt;
  return 0;
}