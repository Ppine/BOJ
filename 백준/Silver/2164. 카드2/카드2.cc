#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  queue<int> q;
  cin >> n;
  int r;

  for(int i=0; i<n; i++) q.push(i+1);
  while(!q.empty()){
    r=q.front();
    q.pop();
    q.push(q.front());
    if(!q.empty()){
      q.pop();
    }
  }
  cout << r;

  return 0;
}