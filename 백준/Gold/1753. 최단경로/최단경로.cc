#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

struct edge {
  int to;
  int w;
};

void di(int v, int start, vector<vector<edge>> adj) {
  vector<long long> dist(v + 1, INF);
  vector<bool> visited(v + 1, false);
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

  dist[start] = 0;
  pq.push({ 0 ,start });

  while (!pq.empty())
  {
    pair<long long, int> tree = pq.top();
    pq.pop();

    long long t_w = tree.first;
    int t = tree.second;

    if (visited[t])
      continue;
    visited[t] = true;

    for (auto& g : adj[t])
    {
      long long gd = g.w + t_w;
      if (gd < dist[g.to])
      {
        dist[g.to] = gd;
        pq.push({ gd, g.to });
      }
    }
  }

  for (int i = 1; i <= v; ++i)
  {
    if (dist[i] == INF)
    {
      cout << "INF\n";
      continue;
    }
    cout << dist[i] << "\n";

  }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int v, e;
  cin >> v >> e;
  int k;
  cin >> k;
  
  vector<vector<edge>> adj(v + 1);
  for (int i = 0; i < e; ++i)
  {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({ v, w });
  }

  di(v, k, adj);


}
