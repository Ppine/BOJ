#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n=0;
  
  string s;
  getline(cin,s);

  for(int i=0; i<s.length(); i++){
    if(s[i]==' ') continue;
    else if(s[i]=='1') n+=500;
    else if(s[i]=='2') n+=800;
    else if(s[i]=='3') n+=1000;
  }
  cout << 5000-n;
}