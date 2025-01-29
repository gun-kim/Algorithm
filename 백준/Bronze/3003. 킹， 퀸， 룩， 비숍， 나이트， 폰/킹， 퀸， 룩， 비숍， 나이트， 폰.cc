#include <bits/stdc++.h>


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  
  int white[6] = { 1, 1, 2, 2, 2, 8 };
  std::vector<int> find = {};
  std::vector<int> result = {};
  for (int i = 0; i < 6; i++)
  {
    int x;
    std::cin >> x;
    find.push_back(x);
  }
  for (int i = 0; i < 6; i++)
  {
    int x;
    x = white[i] - find[i];
    result.push_back(x);
  }
  for (int x : result)
  {
    std::cout << x << " ";
  }
  
  return 0;
}
