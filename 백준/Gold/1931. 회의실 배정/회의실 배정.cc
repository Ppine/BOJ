#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  pair<int,int> time[100005];

  int n,cnt=0;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> time[i].second>>time[i].first;
  }

  sort(time,time+n); //sorting by end time ascending -> 

  int fin = 0;

  for(int i=0; i<n; i++){
    if(time[i].second < fin) continue;// 나 뒤의 일정의 시작시간이 내가 끝나는거보다 작으면 다음으로 이동
    fin = time[i].first;
    cnt++; // 다음 끝나는 시간은 나보다 시작이 크거나 같은 일정 중에서 가장 끝이 빠른 일정임.
  }

  cout << cnt;
  
  
  return 0;
}