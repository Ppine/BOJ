#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  string S;
  string ans;
  int t=0;
  while(n--){
    cin >> S;
    if(t==0){
      for(int i=0; i<S.length(); i++){
        if(S[i]=='S'){
          ans=S;
          t=1;
        }
      }
    }
  }
  cout << ans;
  return 0;

}