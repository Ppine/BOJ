#include <bits/stdc++.h>
using namespace std;

string str;
stack <char> st;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int sum=0;
  int mul=1;

  cin >> str;


  for(int i=0; i<str.size(); i++){
    char c = str[i];
    char b = str[i-1];
    if(c=='('){
      st.push(c);
      mul*=2;
    }
    else if(c=='['){
      st.push(c);
      mul*=3;
    }
    else if(c==')'){
      if(st.empty() || st.top()!='('){
        cout << 0;
        return 0;
      }
      if(b =='(') sum+=mul;
      st.pop();
      mul/=2;
    }
    else if(c==']'){
      if(st.empty() || st.top()!='['){
        cout << 0;
        return 0;
      }
      if(b=='[')sum+=mul;
      st.pop();
      mul/=3;
    }
  }

  if(st.empty())cout <<sum;
  else cout << 0;

  return 0;
}