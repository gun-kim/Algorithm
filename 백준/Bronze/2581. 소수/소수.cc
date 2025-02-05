#include <bits/stdc++.h>
//"N의 약수를 구할 때는, 1부터 N의 제곱근 까지의 수만 0으로 나누어 떨어지는지 확인하면 된다!"


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  
  std::vector<int> sosu;
  int M,N;
  int sum = 0;
  std::cin >> M >> N;
  for(M; M <= N; M++)
  {
    bool is_sosu = true;
    if (M == 1)
      continue;

    for (int i = 2; i*i <= M; i++)
    {
      if (M % i == 0)
      {
        is_sosu = false;
        continue;
      }
    }
    if (is_sosu)
    {
      sosu.push_back(M);
      sum += M;
      continue;
    }
  }
  if (sosu.size() == 0)
  {
    std::cout << "-1";
    return 0;
  }


  std::cout << sum << "\n" << sosu.front();

  return 0;
}
