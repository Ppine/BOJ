#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q[4]={},a=0,n;
  int x,y;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> x >> y;
    if(x==0 || y==0) a++;
    else if(x>0 && y>0) q[0]++;
    else if(x<0 && y>0) q[1]++;
    else if(x<0 && y<0) q[2]++;
    else if(x>0 && y<0) q[3]++;
  }
  for(int i=0; i<4; i++){
    cout << "Q" << i+1 << ": " << q[i] << "\n";
  }
  cout << "AXIS: " << a;
  return 0;

}