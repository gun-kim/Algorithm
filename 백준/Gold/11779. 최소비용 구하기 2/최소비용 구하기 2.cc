#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> 
using namespace std;

struct edge {
  int to;
  int w;
};

const long long INF = 1e18;

void di(int n, int start, int end, vector<vector<edge>>& adj)
{
  vector<long long> dist(n + 1, INF);
  vector<bool> visited(n + 1, false);
  vector<int> parent(n + 1, -1);
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

  dist[start] = 0;
  pq.push({ 0, start });
  parent[start] = 0;

  while (!pq.empty())
  {
    pair<long long, int> tree = pq.top();
    pq.pop();

    long long t_w = tree.first;
    int t = tree.second;

    if (visited[t])
      continue;
    visited[t] = true;

    for (auto& e : adj[t])
    {
      int f = e.to;
      long long W = e.w + t_w;
      if (W < dist[f])
      {
        dist[f] = W;
        pq.push({ W, f });
        parent[f] = t;
      }
    }
  }

  // 출력 1
  cout << dist[end] << "\n";

  // 경로 찾기
  vector<int> path;
  int x = end;
  while (x != 0) {
    path.push_back(x);
    if (x == start) break; 
    x = parent[x];
  }

  cout << path.size() << "\n";
  reverse(path.begin(), path.end());

  for (auto& e : path)
    cout << e << " ";



}

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<edge>> adj(n + 1);
  for (int i = 1; i <= m; ++i)
  {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({ v,w });
  }
  int start, end;
  cin >> start >> end;

  di(n, start, end, adj);


}