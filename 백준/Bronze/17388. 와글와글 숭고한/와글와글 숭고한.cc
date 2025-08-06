#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int s,k,h;
  int total;
  int u=0;
  cin >> s>>k>>h;
  total = s+k+h;
  if(total >=100){
    cout <<"OK";
    return 0;
  }
  else{
  u = min(s,k);
  u = min(u,h);
  if(u==s) cout <<"Soongsil";
  else if(u==k) cout <<"Korea";
  else cout <<"Hanyang";
  }

  
  return 0;
}