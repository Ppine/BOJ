#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int num[9];
  int sum=0;
  for(int i=0; i<9; i++) {
    cin >> num[i];
    sum+=num[i];
  }
  for(int i=0; i<9; i++){
    for(int j=i+1; j<9; j++){
      if(sum-(num[i]+num[j])==100){
        num[i]=num[j]=0;
        break;
      }
    }
    if(num[i]==0) break;
  }
  sort(num,num+9);
  for(int i=2; i<9; i++) cout << num[i]<<'\n';

}