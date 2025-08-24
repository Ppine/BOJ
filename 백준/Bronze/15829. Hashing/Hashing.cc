#include <bits/stdc++.h>
using namespace std;

#define r 31
#define m 1234567891
#define ll long long

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n,temp;
  cin >> n;
  string s;
  cin >> s;

  ll ans=0;
  for(int i=0; i<n; i++){
    temp = s[i]-'a'+1;
    for(int j=0; j<i; j++){
      temp *= r;
      temp %=m;
    }
    // temp *= pow(r,i);
    // temp %=m;
    ans += temp;
    ans %= m;
  }
  cout << ans;
  return 0;
}
