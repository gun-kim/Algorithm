#include <bits/stdc++.h>


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  
  int input1, input2;
  while (true)
  {
    std::cin >> input1 >> input2;
    if (input1 == 0 && input2 == 0)
      break;

    if (input2 % input1 == 0)
      std::cout << "factor" << "\n";
    else if (input1 % input2 == 0)
      std::cout << "multiple" << "\n";
    else
      std::cout << "neither" << "\n";

  }


  return 0;
}
