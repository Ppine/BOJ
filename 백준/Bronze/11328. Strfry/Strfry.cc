#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  int num[26];

  for(int i=0; i<n; i++){
    fill(num,num+26,0);
    bool p=true;
    string s1,s2;
    cin >> s1>>s2;
    if(s1.length()!=s2.length()){
      cout<<"Impossible\n";
      continue;
    }
    for(int j=0; j<s1.length(); j++){
      num[s1[j]-97]++;
    }
    for(int j=0; j<s2.length(); j++){
      num[s2[j]-97]--;
    }
    for(int j=0; j<26; j++){
      if(num[j]==0) continue;
      else{
        cout << "Impossible\n";
        p=false;
        break;
      }
    }
    if(p) cout << "Possible\n";
  }
  return 0;
}