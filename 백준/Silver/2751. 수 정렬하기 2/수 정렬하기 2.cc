#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int N;
  std::cin >> N;
  std::vector<int> score;
  for(int i =0; i<N;i++)
  {
    int value;
    std::cin >> value;
    score.push_back(value);
  }
  std::sort(score.begin(), score.end());
  for (int i = 0; i < N;i++)
  {
    std::cout << score[i] << "\n";
  }
}