#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  cin >> n>>m;
  string s;
  for(int i=0; i<n; i++){
    cin >> s;
    for(int j=m; j>0; j--){
      cout<<s[j-1];
    }
    cout<<"\n";
  }

  
  return 0;
}