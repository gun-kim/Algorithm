#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(nullptr);

  int N;
  cin >> N;
  vector<pair<int, string>> jujge;
  while (N--)
  {
    int age;
    string name;
    cin >> age >> name;
    jujge.push_back({age, name});
  }

  stable_sort(jujge.begin(), jujge.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
    });
  
  for (const auto a : jujge)
  {
    cout << a.first << " " << a.second << "\n";
  }



  return 0;
}

