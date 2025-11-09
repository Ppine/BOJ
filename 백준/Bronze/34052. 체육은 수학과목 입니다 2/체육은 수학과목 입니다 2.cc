#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a,s=0;
  for(int i=0; i<4; i++){
    cin >> a;
    s+=a;
  }
  if(s<=1500) cout <<"Yes";
  else cout << "No";
  return 0;
}
