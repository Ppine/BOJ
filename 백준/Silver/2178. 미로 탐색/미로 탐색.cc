#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second //BFS에서는 X가 행, Y가 열 -> y-1, y, y+1
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int board[102][102];
int vis[102][102];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  cin >> n >> m;
  string tmp;
  for(int i=0; i<n; i++){
    cin >> tmp;
    for(int j=0; j<m; j++){
      board[i][j] = tmp[j]-48;
    }
  }

  queue <pair <int,int>> Q;

  Q.push({0,0});
  vis[0][0] = 1;
  // int len = 1;

  while(!Q.empty()){
    pair <int,int> cur = Q.front(); Q.pop();
    // len++;
    for(int dir=0; dir<4; dir++){
      int nx = cur.x + dx[dir];
      int ny = cur.y + dy[dir];
      if(nx<0 || ny <0 || nx>=n || ny>=m) continue; // out of range
      if(vis[nx][ny]>0 || board[nx][ny]!=1) continue; // already visited or not road
      Q.push({nx,ny});
      // vis[nx][ny] = len; // visit with length
      vis[nx][ny] = vis[cur.x][cur.y]+1;
    }
  }

  // for(int i=0; i<n; i++){
  //   for(int j=0; j<m; j++){
  //     cout << vis[i][j]<< " ";
  //   }
  //   cout << '\n';
  // }

  cout << vis[n-1][m-1];
  return 0;
}
