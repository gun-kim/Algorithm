#include <bits/stdc++.h>
using namespace std;

const int K = 17; // 2^17 = 131072 >= 100000

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<vector<int>> adj(n + 1);
  vector<int> depth(n + 1, 0);
  vector<vector<int>> parent(K + 1, vector<int>(n + 1, 0));

  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  // BFS (depth + parent[0])
  queue<int> q;
  q.push(1);
  depth[1] = 0;

  vector<int> visited(n + 1, 0);
  visited[1] = 1;

  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
      if (!visited[v]) {
        visited[v] = 1;
        parent[0][v] = u;
        depth[v] = depth[u] + 1;
        q.push(v);
      }
    }
  }

  // parent table
  for (int i = 1; i <= K; i++) {
    for (int v = 1; v <= n; v++) {
      int mid = parent[i - 1][v];
      parent[i][v] = parent[i - 1][mid];
    }
  }

  int m;
  cin >> m;

  while (m--) {
    int a, b;
    cin >> a >> b;

    // depth 맞추기
    if (depth[a] < depth[b]) swap(a, b);

    int diff = depth[a] - depth[b];

    // 도원님 방식 100% 그대로 구현
    for (int i = K; i >= 0; i--) {
      int jump = 1;
      for (int x = 0; x < i; x++) jump *= 2;
      if (diff >= jump) {
        diff -= jump;
        a = parent[i][a];
      }
    }

    if (a == b) {
      cout << a << "\n";
      continue;
    }

    // 도원님 LCA 루프 “그대로” 사용
    int lca = -1;
    for (int i = K; i >= 0; i--) {
      if (parent[i][a] != parent[i][b]) {
        a = parent[i][a];
        b = parent[i][b];
      }
    }
    lca =  parent[0][a];


    cout << lca << "\n";
  }

  return 0;
}
