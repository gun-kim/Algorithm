#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(nullptr);
  
  int N;
  vector<string> vec;

  cin >> N;

  while (N--)
  {
    string str;
    cin >> str;
    vec.push_back(str);
  }


  sort(vec.begin(), vec.end(), [](const string& a, const string& b)
    {
      if (a.size() == b.size())
        return a < b;
      return a.size() < b.size();
    });

  vec.erase(unique(vec.begin(), vec.end()), vec.end());


  for (const auto& p : vec)
  {
    cout << p << "\n";
  }

  return 0;
}

