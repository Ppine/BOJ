#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  list <char> L;
  while(n--){
    auto t = L.begin();
    string S;
    char c;
    cin >> S;
    for(int i=0; i<S.length(); i++){
      c=S[i];
      if(c=='<'){
        if(t!=L.begin()) t--;
      }
      else if(c=='>'){
        if(t!=L.end()) t++;
      }
      else if(c=='-'){
        if(t!=L.begin()){
          t--;
          t=L.erase(t);
        }
      }
      else L.insert(t,c);
    }
    for(auto i : L) cout << i;
    cout << "\n";
    L.clear();
  }
  return 0;

}