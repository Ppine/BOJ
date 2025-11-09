#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,tmp;
  cin >> n;
  int cnt = 0;
  int sum =0;
  for(int i=0; i<n; i++){
    cin >> tmp;
    sum+=tmp;
    sum+=8;
  }
  sum-=8;
  cout << sum/24<< " "<< sum%24;
  return 0;
}
