#include <bits/stdc++.h>
using namespace std;

bool getinput(){

  stack<char> s;
  char c;
  string S;
  getline(cin,S);
  for(int i=0; i<S.length(); i++){
    c=S[i];
    if(c=='.' && i==0) return false; //종료 트리거
    if(c=='(' || c=='[') s.push(c); // 여는 괄호 입력
    if(c==')') {
      if(!s.empty() && s.top()=='(') s.pop();
      else s.push(c);
    }
    if(c==']') {
      if(!s.empty() && s.top()=='[') s.pop();
      else s.push(c);
    }
  }
  if(s.empty()) cout << "yes"<<'\n';
  else cout <<"no"<<'\n';
  return true;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  while(true){
    if(!getinput()) break;
  }

  return 0;
}
