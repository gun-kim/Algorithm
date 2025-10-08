#include <bits/stdc++.h>
using namespace std;

struct edge {
  int to;
  int w;
};

void DFS(int u, vector<vector<edge>>& adj, vector<int>& visit_order, int& order);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, start;
  cin >> n >> m >> start;
  vector<vector<edge>> adj(n + 1);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back({ v, 1 });
    adj[v].push_back({ u, 1 });
  }

  // 정렬 필수!
  for (int i = 1; i <= n; ++i) {
    sort(adj[i].begin(), adj[i].end(), [](const edge& a, const edge& b) {
      return a.to < b.to;
      });
  }

  vector<int> visit_order(n + 1, 0);
  int order = 1;
  DFS(start, adj, visit_order, order);

  for (int i = 1; i <= n; ++i) {
    cout << visit_order[i] << '\n';
  }
}

void DFS(int u, vector<vector<edge>>& adj, vector<int>& visit_order, int& order) {
  visit_order[u] = order++;
  for (auto& v : adj[u]) {
    if (visit_order[v.to] == 0) {
      DFS(v.to, adj, visit_order, order);
    }
  }
}
