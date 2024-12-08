

#include <bits/stdc++.h>

using namespace std;

vector <int> v[505],v1[505];
int chk[505], chk1[505];

// 정방향 dfs
void DFS(int a)
{
	if(chk[a]==1) return; // 이미 방문됐다면 종료
	chk[a]=1; // 방문할시 체크
	for(int i=0; i<v[a].size(); i++) // 존재하는 경로 전부 탐색
	{
		DFS(v[a][i]); // 그 다음 번째 방문
	}
}

// 역방향 dfs
void DFS1(int a)
{
	if(chk1[a]==1) return; // 이미 방문됐다면 종료
	chk1[a]=1; // 방문할시 체크
	for(int i=0; i<v1[a].size(); i++) // 존재하는 경로 전부 탐색
	{
		DFS1(v1[a][i]); // 그 다음 번째 방문
	}
}


int main()
{
	int n, m, ans=0;
	int j, a, b;
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d %d",&a,&b);
		                         // 그래프 경로 저장 방식은 인접 배열이 아닌 인접 행렬을 사용한다
		v[a].push_back(b); // 정방향, v[a]에 b 추가 (v[a][0], v[a][1], v[a][2], ... 이렇게 쌓인다)
		v1[b].push_back(a); // 역방향, v[b]에 a 추가
	}
	
	for(int i=1; i<=n; i++)
	{
		DFS(i); // 정방향
		DFS1(i); // 역방향

		for(j=1;j<=n;j++) // 체크가 비어있는지 확인
		{
			if(chk[j]+chk1[j]==0) break; // chk와 chk1 배열은 0 아니면 1의 값을 가진다
			                                   // 정방향 역방향 chk 배열이 둘 다 0인 경우, 즉 어느 방향으로든 방문하지 않으면 break
		}

		if(j>n) ans++; // 위 for문에서 break가 한번이라도 실행되었을 경우 j<=n 상태이다
		                 // 한번이라도 break되지 않을 경우, 즉 chk[j]==0 && chk1[j]==0 되는 곳이 없을 경우를 뜻한다
		                 // 두 dfs 함수로 방문되지 않은 정점이 없을 경우, 자신이 키가 몇 번째인지 알 수 있는 학생이라 판단하여 정답+1

		for(j=1;j<=n;j++) // 체크배열 초기화
		{
			chk[j]=chk1[j]=0;
		}
	}
	
	printf("%d",ans); // 정답 출력
	
    return 0;

}