#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  int chk[100001];
  fill(chk,chk+100001,1);
  stack<char> ans;
  stack<char> temp;
  cin >> n;
  int k;
  int p=0,t;
  bool pos=true;
  while(n--){
    t=p;
    cin >> k;
    if(chk[k]==0) continue;
    if(p<k){
      while(t<k){
        t++;
        if(chk[t]==1) ans.push('+');
      }
      ans.push('-');
      p=t;
      chk[p]=0;
    }
    else if(p>k){
      while(t>k){
        t--;
        if(chk[t]==1&&t==k) ans.push('-');
        else if(chk[t]==1 && t!=k) pos=false;
      }
      p=t;
      chk[p]=0;
    }
  }
  if(pos){
    while(!ans.empty()){
      temp.push(ans.top());
      ans.pop();
    }
    while(!temp.empty()){
      cout << temp.top() <<'\n';
      temp.pop();
    }
  }
  else cout << "NO";
  return 0;
}