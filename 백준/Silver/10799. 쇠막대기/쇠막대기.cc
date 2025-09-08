#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string S;
  stack <char> s;

  cin >> S;
  int ans=0;
  int cnt=0;
  int temp;

  for(int i=0; i<S.length(); i++){
    char c=S[i];
    char next = S[i+1];
    if(c=='(' && next=='('){
      cnt++;
      // s.push(c);
    }
    else if(c=='(' && next ==')'){
      ans+=cnt;
      // s.pop();
      i++;
    }
    else if(c==')'){
      ans++;
      cnt--;
    }
  }
  cout << ans;
  return 0;
}