#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  int temp;
  cin >>n>>m;
  temp=n;
  int arr[4]={-1,-1,-1,-1};
  int cnt=0;
  while(n>9){
    arr[cnt]=n%10;
    n/=10;
    cnt++;
  }
  arr[cnt]=n;
  cnt++;
  if(cnt*temp<=m){
    for(int i=0; i<temp; i++) cout << temp;
  }
  else{
    int k=0;
    while(true){
      for(int j=cnt; j>0; j--){
        cout << arr[j-1];
        k++;
        if(k==m) return 0;
      }
    }
  }
  return 0;
}