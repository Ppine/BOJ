#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a[5],b[5],c[5];
  for(int i=0; i<3; i++) cin >> a[i];
  for(int i=0; i<3; i++) cin >> c[i];
  b[0]=c[0]-a[2];
  b[1]=c[1]/a[1];
  b[2]=c[2]-a[0];
  for(int i=0; i<3; i++) cout << b[i] << " ";
  return 0;

}