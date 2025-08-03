#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  list <char> L;
  string s;
  cin >> s;
  for(char ch : s) L.push_back(ch);
  auto t = L.end();
  int n;
  cin >> n;
  char c,ch;
  for(int i=0; i<n; i++){
    cin >> c;
    if(c=='L'){
      if(t != L.begin()) t--;
      // cout << "Lt=" << *t << "\n";
    }
    else if(c=='D'){
      if(t != L.end()) t++;
    }
    else if(c=='B'){
      if(t!=L.begin()){
        t--;
        t=L.erase(t);
      }
    }
    else if(c=='P'){
      cin >> ch;
      L.insert(t,ch);

      // for(auto i : L) cout << i;
      // cout << "\n";

      // cout << "Pt=" << *t << "\n";
    }
  }
  for(auto i : L) cout << i;
  return 0;

}