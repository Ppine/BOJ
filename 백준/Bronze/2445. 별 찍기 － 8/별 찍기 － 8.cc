#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;
  // 123454321

  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++) cout << "*";
    for(int j=2*(n-i-1); j>0; j--) cout <<" ";
    for(int j=0; j<i+1; j++) cout << "*";
    cout << '\n';
  }
  for(int i=n-1; i>0; i--){
    for(int j=i; j>0; j--) cout << "*";
    for(int j=2*(n-i); j>0; j--) cout <<" ";
    for(int j=i; j>0; j--) cout << "*";
    cout << '\n';
  }
  
  return 0;
}