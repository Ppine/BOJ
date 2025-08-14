#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int cnt=1, m=1;
  if(n==1){
    cout << 1;
    return 0;
  }
  while(true){
    if(m < n && n <= 6*cnt+m) {
      cnt++;
      break;
    }
    else{
      m+=6*cnt;
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}
