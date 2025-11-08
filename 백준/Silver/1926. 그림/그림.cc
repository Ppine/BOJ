#include <bits/stdc++.h> //이중 for문 사용

using namespace std;

#define x first
#define y second //BFS에서는 X가 행, Y가 열 -> y-1, y, y+1
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int board[502][502];
bool vis[502][502];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  cin >> n >> m;
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> board[i][j];
    }
  }

  queue <pair<int,int>> Q;
  int s = 0;
  int cnt=0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(board[i][j]==0 || vis[i][j]) continue; //0이므로 시작할 수 없음 또는 이미 방문했음
      Q.push({i,j});
      vis[i][j]=1;
      cnt++;
      int tmp=0;
      while(!Q.empty()){// still board is 1
        pair <int, int> cur = Q.front(); Q.pop();
        tmp++; // calculate surface of pi
        for(int dir = 0; dir<4; dir++){
          int nx = cur.x + dx[dir];
          int ny = cur.y + dy[dir];
          if(nx<0 || nx>=n || ny<0 || ny>=m) continue; // out of range
          if(vis[nx][ny] || board[nx][ny] == 0) continue; // already visited or board is 0
          vis[nx][ny]=1;
          Q.push({nx,ny});
        }
      }
      s = max(s,tmp); // s is max surface
    }
  }

  cout << cnt << '\n'<<s;

  
  return 0;
}
