#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x;
  int cnt=0;
  cin >> n;
  int arr[100001]={};
  
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  cin >> x;
  for(int i=0; i<n; i++){
    while(arr[i]==0 || arr[i]>=x) i++;
    for(int j=i+1; j<n; j++){
      if(arr[i]+arr[j]==x){
        cnt++;
        // cout << "print" << i << " " << j << " "<< arr[i] << " "<< arr[j] << "\n";
        arr[j]=0;
        break;
      }
    }
}
  cout << cnt;
  return 0;

} 