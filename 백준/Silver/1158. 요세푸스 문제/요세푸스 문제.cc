#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,k;
  cin >> n >> k;
  int arr[5001];
  fill(arr,arr+5001,1);
  cout << '<';
  int p=k;
  int cnt=0;
  cout << p;
  arr[p]--;
  for(int i=1; i<n; i++){
    cnt=0;
    while(cnt!=k){
      if(p<n){
        p++;
        if(arr[p]==1) cnt++;
      }
      else p=0;
    }
    arr[p]--;
    cout << ", " << p;

  }
  cout << '>';

  return 0;

}