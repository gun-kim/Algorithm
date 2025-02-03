#include <bits/stdc++.h>
//"N의 약수를 구할 때는, 1부터 N의 제곱근 까지의 수만 0으로 나누어 떨어지는지 확인하면 된다!"


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  
  std::vector<int> measure;
  int x;
  while (true)
  {
    std::cin >> x;
    if (x == -1)
      return 0;

    measure.clear();

    for (int i = 1; i <= sqrt(x); i++) //sqrt : 제곱근
    {
      if (x % i == 0)
      {
        measure.push_back(i);
        if (i != x / i && x != x/i) measure.push_back(x / i);
      }
    }
    std::sort(measure.begin(), measure.end());

    std::cout << x;
    int sum = 0;
    for (auto const a : measure)
    {
      sum += a;
    }

    if (x == sum)
    {
      std::cout << " = ";
      for (int i = 0; i < measure.size() - 1; i++)
      {
        std::cout << measure[i] << " + ";
      }
      std::cout << measure.back();
    }
    else
    {
      std::cout << " is NOT perfect.";
    }
  
      
    std::cout << "\n";

  }


  return 0;
}
