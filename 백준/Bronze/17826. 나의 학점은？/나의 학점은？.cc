#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int score[51];
  for(int i=0; i<50; i++) cin >> score[i];
  int s;
  cin >> s;
  int g;
  for(int i=0; i<50; i++) if(s==score[i]) g=i+1;
  if(1<=g && g<=5) cout << "A+";
  else if(6<=g && g<=15) cout << "A0";
  else if(16<=g && g<=30) cout << "B+";
  else if(31<=g && g<=35) cout << "B0";
  else if(36<=g && g<=45) cout << "C+";
  else if(46<=g && g<=48) cout << "C0";
  else cout << "F";
  return 0;
}