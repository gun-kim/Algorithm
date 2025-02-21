#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int N;
  vector<pair<int, int>> vec;

  cin >> N;

  while (N--)
  {
    int x, y;
    cin >> x >> y;
    vec.push_back({ x, y });
  }
  sort(vec.begin(), vec.end());

  for (const auto& p : vec)
  {
    cout << p.first << " " << p.second << "\n";
  }

  return 0;
}
