#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(nullptr);
  
  int N;
  vector<pair<int, int>> vec1;

  cin >> N;

  while (N--)
  {
    int x, y;
    cin >> x >> y;
    vec1.push_back({ x, y });
  }


  sort(vec1.begin(), vec1.end(), [](const pair<int, int>& a, const pair<int, int>& b)
    {
      if (a.second == b.second)
        return a.first < b.first;
      return a.second < b.second;
    });



  for (const auto& p : vec1)
  {
    cout << p.first << " " << p.second << "\n";
  }

  return 0;
}

