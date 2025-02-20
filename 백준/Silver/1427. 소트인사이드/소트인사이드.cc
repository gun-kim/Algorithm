#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  string str;
  std::cin >> str;
  vector<int> vec;
  for (int i = 0; i < str.length(); i++)
  {
    vec.push_back(str[i] - '0');
  }
  sort(vec.begin(), vec.end(), greater<int>());
  for (auto const x : vec)
  {
    cout << x;
  }

  

  return 0;
}
