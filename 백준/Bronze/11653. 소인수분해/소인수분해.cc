#include <bits/stdc++.h>



int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  
  std::vector<int> soin;
  int N;
  std::cin >> N;
  if (N == 1)
  {
    return 0;
  }

  for (int i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      soin.push_back(i);
      N /= i;
    }
  }
  
  if (N > 1) {
    soin.push_back(N);
  }
  for (int i = 0; i < soin.size(); i++)
  {
    std::cout << soin[i] << "\n";
  }
  return 0;
}
