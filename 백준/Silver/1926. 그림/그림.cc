#include <bits/stdc++.h>

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
  int cnt=0; // num of 1
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> board[i][j];
      if(board[i][j]==1) cnt++;
    }
  }

  int s = 0; // max area of pic;
  int piccnt = 0;
  int xi=0, yi=0;
  queue <pair <int,int> > Q;
  while(cnt>0){
    int tmp=0;//임시 그림 넓이 저장변수
    if(board[xi][yi]==1){ //BFS 시작점이 1이라면, 개수 하나 빼고 넓이 1 증가
      cnt--;
      tmp++;
      vis[xi][yi]=1;//방문
      Q.push({xi,yi});
    }
    while(!Q.empty()){
      pair<int,int> cur = Q.front(); Q.pop();
      for(int dir = 0; dir<4; dir++){//하우상좌
        int nx = cur.x + dx[dir];
        int ny = cur.y + dy[dir];
        if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
        if(vis[nx][ny] || board[nx][ny]!=1) continue;
        vis[nx][ny]=1;
        Q.push({nx,ny});//조건 만족하는 칸이니까 큐에 넣고 만족하는 칸 개수 하나 줄이고 넓이 증가
        cnt--;
        tmp++;
      }
    }
    if(tmp>0) piccnt++;//큐가 한번 빌때마다 그림이 끝남
    s = max(s,tmp);
    while(board[xi][yi]==0 || vis[xi][yi]==1){
      if(xi>= 0 && xi<n-1) xi++; // go down
      else if(yi >=0 && yi <m-1){
        yi++; xi=0; // 오른쪽 열로 이동하고 행은 다시 0으로
      }
      else if(xi == n-1 && yi==m-1) break; //끝에 도달하면
    }
    Q.push({xi,yi});
  }
  cout << piccnt << '\n' << s;

  return 0;
}
