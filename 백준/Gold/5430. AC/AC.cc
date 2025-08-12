#include <bits/stdc++.h>
using namespace std;

void maked(string& arr, deque<int>& d){
  int cur=0;
  for(int i=1; i<arr.size()-1; i++){
    if(arr[i]==','){
      d.push_back(cur);
      cur=0;
    }
    else cur=10*cur+(arr[i]-'0');
  }
  if(cur!=0) d.push_back(cur);
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  bool error;
  while(t--){
    error = true;
    int cnt=0;
    string p;
    int n;
    cin >> p >> n;
    string arr;
    cin >> arr;
    deque<int> d;
    maked(arr,d);
    for(int j=0; j<p.size(); j++){
      if(p[j]=='R') cnt++;
      else if(p[j]=='D'&& cnt%2==0){
        if(d.empty()){
          cout << "error" <<'\n';
          error = false;
          break;
        }
        else d.pop_front();
      }
      else if(p[j]=='D'&& cnt%2==1){
        if(d.empty()){
          cout << "error" <<'\n';
          error = false;
          break;
        }
        else d.pop_back();
      }
    }
    int size = d.size();
    if(cnt%2==0 && error){
      cout <<"[";
      for(int j=0; j<size; j++){
        if(j==0){
          cout << d.front();
          d.pop_front();
        }
        else{
          cout << ","<<d.front();
          d.pop_front();
        }
      }
      cout << "]\n";
    }
    else if(cnt%2==1 && error){
      cout <<"[";
      for(int j=0; j<size; j++){
        if(j==0){
          cout << d.back();
          d.pop_back();
        }
        else{
          cout << ","<<d.back();
          d.pop_back();
        }
      }
      cout << "]\n";
    }
  }

  return 0;
}
