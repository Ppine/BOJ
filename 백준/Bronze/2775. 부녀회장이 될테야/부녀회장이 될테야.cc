#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int p[15][15];

  for(int i=0; i<15; i++) p[0][i]=i;
  for(int i=1; i<15; i++){
    for(int j=1; j<15; j++){
      if(j==1) p[i][j]=1;//1호 채우기.
      else if(j!=1){
        int temp=0;
        for(int k=1; k<=j; k++) temp+=p[i-1][k];
        p[i][j]=temp;
      }
    }
  }

  int t,n,k;
  cin >> t;
  for(int i=0; i<t; i++){
    cin >>k>>n;
    cout<<p[k][n]<<'\n';

  }
}