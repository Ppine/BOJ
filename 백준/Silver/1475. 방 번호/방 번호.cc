#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string n;
  int m=0;
  cin >> n;
  int arr[10]={};
  for(int i=0; i<n.length(); i++){
    if(n[i]=='9') n[i]='6';
    arr[n[i]-'0']++;
  }
  if(arr[6]%2==0) arr[6]/=2;
  else arr[6] = arr[6]/2 +1;

  for(int i=0; i<9; i++){
    m=max(m,arr[i]);
  }

  cout << m;
  return 0;

}