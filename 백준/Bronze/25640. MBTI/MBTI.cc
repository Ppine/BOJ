#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int cnt=0;
  string m;
  string t;
  int n;
  cin >> m >> n;
  for(int i=0; i<n; i++){
    cin >> t;
    if(m.compare(t) == 0) cnt++;
  }
  cout << cnt;
  return 0;

}