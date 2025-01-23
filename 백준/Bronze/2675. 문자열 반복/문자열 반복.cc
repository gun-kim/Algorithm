#include <bits/stdc++.h>


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  std::string S,P;
  int T,N;
  std::cin >> T;
  std::cin.ignore();
  while (T--)
  {
    std::cin >> N >> S;
    for (int i = 0; i < S.length();i++)
    {
      for (int j = 0; j < N; j++)
      {
        std::cout << S[i];
      }
    }
    std::cout << "\n";
  }

  return 0;
}
