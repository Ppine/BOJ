#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t1,t2;
  cin >> t1 >> t2;

  // 시침 12시간 360도 1시간에 30도 2분에 1도
  // 분침 1분에 6도 -> 10초에 1도
  //12도에 1도. 
  int temp;
  temp = t1%30;

  if(t2==12*temp) cout <<"O";
  else cout << "X";

  return 0;
}