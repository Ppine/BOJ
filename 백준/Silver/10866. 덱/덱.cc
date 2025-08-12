#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  deque<int> d;
  cin >> n;

  for(int i=0; i<n; i++){
    string c;
    cin >> c;
    if(c=="push_front"){
      int k;
      cin >> k;
      d.push_front(k);
    }
    if(c=="push_back"){
      int k;
      cin >> k;
      d.push_back(k);
    }
    if(c=="pop_front"){
      if(d.empty()) cout << -1 <<'\n';
      else {
        cout << d.front()<<'\n';
        d.pop_front();
      }
    }
    if(c=="pop_back"){
      if(d.empty()) cout << -1<<'\n';
      else {
        cout << d.back()<<'\n';
        d.pop_back();
      }
    }
    if(c=="size") cout << d.size()<<'\n';
    if(c=="empty") cout << d.empty()<<'\n';
    if(c=="front"){
      if(d.empty()) cout << -1<<'\n';
      else cout << d.front()<<'\n';
    }
    if(c=="back"){
      if(d.empty()) cout << -1<<'\n';
      else cout << d.back()<<'\n';
    }
  }


  return 0;
}