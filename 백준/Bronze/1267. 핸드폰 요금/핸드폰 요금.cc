#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  int t;
  int y,m;
  cin >> n;
  y=m=0;
  for(int i=0; i<n; i++){
    cin >> t;
    y += 10*((t/30)+1);
    m += 15*((t/60)+1);
  }
  if(y==m) cout << "Y " << "M " << y;
  else if(y<m) cout << "Y " << y;
  else cout << "M "<< m;


  return 0;

}