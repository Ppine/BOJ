#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n,m;
  cin >> n>>m;
  if(n==m) cout <<'0'<<'\n';
  else cout << abs(m-n)-1<<'\n';
  for(long long i=min(n,m)+1; i<max(n,m); i++) cout <<i<<' ';

  return 0;

}