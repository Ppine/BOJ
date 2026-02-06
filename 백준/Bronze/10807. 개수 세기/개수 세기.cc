#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a[101];
  int cnt=0;
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int k; cin>>k;
  for(int i=0; i<n; i++){
    if(a[i]==k) cnt++;
  }
  cout << cnt;
  return 0;
}