#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int N;
  std::cin >> N;
  if (N == 1)
  {
    std::cout << "1";
    return 0;
  }
  std::queue<int> num;
  for(int i =1; i<=N;i++)
  {
    num.push(i);
  }
  for (int i = 0; i < N;i++)  
  {
    num.pop();
    if (num.size() == 1)
    {
      std::cout << num.front();
      return 0;
    }
    int temp;
    temp = num.front();
    num.pop();
    num.push(temp);
  }

}