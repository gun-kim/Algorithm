#include <bits/stdc++.h>


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  std::string input1, input2;
  std::cin >> input1 >> input2;
  char temp;
  temp = input1[2];
  input1[2] = input1[0];
  input1[0] = temp;

  temp = input2[2];
  input2[2] = input2[0];
  input2[0] = temp;

  if (input1 > input2)
    std::cout << input1;
  else
    std::cout << input2;

  
  
  return 0;
}
