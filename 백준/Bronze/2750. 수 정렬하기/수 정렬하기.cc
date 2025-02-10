#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int x;
  std::vector<int> num;
  std::cin >> x;
  for(int i = 0; i < x; i++)
  {
    int value;
    std::cin >> value;
    num.push_back(value);  // 동적으로 값을 추가
  }
  std::sort(num.begin(), num.end());
  for (const auto& a : num)
  {
    std::cout << a << "\n";
  }
}