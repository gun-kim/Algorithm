#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int x;
  std::vector<int> num;
  for(int i = 0; i < 5; i++)
  {
    int value;
    std::cin >> value;
    num.push_back(value); 
  }
  std::sort(num.begin(), num.end());

  int sum = 0;
  for (const auto& a : num)
  {
    sum += a;
  }

  std::cout << int(sum / num.size()) << "\n" << num[num.size() / 2];
}