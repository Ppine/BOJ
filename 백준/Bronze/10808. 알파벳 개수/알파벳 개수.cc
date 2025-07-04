#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string word;
  cin >> word;
  int a[26]={0};
  for(int i=0; i<word.length(); i++){
    a[word[i]-97]++;
  }
  for(int e : a){
    cout << e << " ";
  }
}