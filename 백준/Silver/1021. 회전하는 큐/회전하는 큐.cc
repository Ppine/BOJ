#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  deque<int> d1,d2;
  cin >> n >>m;
    
  int c1,c2,result=0;
  for(int i=1; i<=n; i++) d1.push_back(i);
  for(int i=0; i<m; i++){
    c1=c2=0;
    if(d1.empty()) break;
    d2=d1;
    int k;
    cin >> k;
    if(k==d1.front()) d1.pop_front();
    else{
      while(k!=d1.front()){
        d1.push_back(d1.front());
        d1.pop_front();
        c1++;
      }
      while(k!=d2.front()){
        d2.push_front(d2.back());
        d2.pop_back();
        c2++;
      }
      result += min(c1,c2);
      d1.pop_front();
    }
  }

  cout << result;

  return 0;
}