#include <bits/stdc++.h>


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  std::string s;
  std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
  std::cin >> s;
  for (int i = 0; i < alphabet.length(); i++)
    std::cout << (int)s.find(alphabet[i]) << " ";
  return 0;
}
