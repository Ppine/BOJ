#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  double price[3], weight[3];

  for(int i=0; i<3; i++) cin >> price[i] >> weight[i];

  for(int i=0; i<3; i++){
    price[i] *= 10;
    weight[i] *= 10;
    if(price[i] >= 5000) price[i]-=500;
  }

  double temp, max=-999;
  int ans=0;
  for(int i=0; i<3; i++){
    temp = weight[i]/price[i];
    if(temp>max){
      max=temp;
      ans=i;
    }
  }

  if(ans==0) cout << 'S';
  if(ans==1) cout << 'N';
  if(ans==2) cout << 'U';

  return 0;
}