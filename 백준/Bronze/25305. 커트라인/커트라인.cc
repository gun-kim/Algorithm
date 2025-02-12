#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int N, K;
  std::cin >> N >> K;
  std::vector<int> score;
  while (N--)
  {
    int value;
    std::cin >> value;
    score.push_back(value);
  }
  std::sort(score.begin(), score.end(), std::greater<int>());
  std::cout << score[K - 1];
}