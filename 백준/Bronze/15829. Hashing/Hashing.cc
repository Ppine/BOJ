#include <bits/stdc++.h>
using namespace std;

#define r 31
#define m 1234567891

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,temp;
  cin >> n;
  string s;
  cin >> s;

  int ans=0;
  for(int i=0; i<n; i++){
    temp = s[i]-'a'+1;
    ans = ans + temp * pow(r,i);
    ans %= m;
  }
  cout << ans;
  return 0;
}
