#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<bool> visited2;

void DFS(int u) {
	visited[u] = true;
	cout << u << " ";

	for (int v : adj[u]) {
		if (!visited[v]) {
			DFS(v);
		}
	}
}

void BFS(int start) {
	queue<int> q;                  // 탐색 순서를 관리할 큐 생성
	visited2[start] = true;         // 시작 정점 방문 표시
            // 시작 정점까지의 거리는 0
	q.push(start);                 // 큐에 시작 정점 넣기

	while (!q.empty()) {           // 큐가 빌 때까지 반복
		int u = q.front();         // 큐 맨 앞 정점을 꺼내서
		q.pop();                   // 큐에서 제거
		cout << u << " ";          // 방문한 정점 출력

		for (int v : adj[u]) {        // u와 연결된 모든 정점 확인
			if (!visited2[v]) {        // 아직 방문하지 않았다면
				visited2[v] = true;    // 방문 표시
				q.push(v);              // 큐에 새 정점 넣기
			}
		}
	}
}
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	adj.assign(n+1, {});
	visited.assign(n+1, false);
	visited2.assign(n + 1, false);

	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 1;i <= n;i++) sort(adj[i].begin(), adj[i].end()); // 작은 번호 우선
	
	DFS(k);
	cout << "\n";
	BFS(k);


}
