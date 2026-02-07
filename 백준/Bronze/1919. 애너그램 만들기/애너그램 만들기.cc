#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int s1[26]={},s2[26]={};

  string a,b;
  cin >>a>>b;
  for(int i=0; i<a.length(); i++) s1[a[i]-97]++;
  for(int i=0; i<b.length(); i++) s2[b[i]-97]++;
  int n=0;
  for(int i=0; i<26; i++) n+=abs(s1[i]-s2[i]);

  cout << n;

  return 0;
}