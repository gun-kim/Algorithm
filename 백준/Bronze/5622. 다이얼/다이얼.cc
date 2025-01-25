#include <bits/stdc++.h>


int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  std::unordered_map<char, int> dial;
  dial['A'] = 3; dial['B'] = 3; dial['C'] = 3;
  dial['D'] = 4; dial['E'] = 4; dial['F'] = 4;
  dial['G'] = 5; dial['H'] = 5; dial['I'] = 5;
  dial['J'] = 6; dial['K'] = 6; dial['L'] = 6;
  dial['M'] = 7; dial['N'] = 7; dial['O'] = 7;
  dial['P'] = 8; dial['Q'] = 8; dial['R'] = 8; dial['S'] = 8;
  dial['T'] = 9; dial['U'] = 9; dial['V'] = 9;
  dial['W'] = 10; dial['X'] = 10; dial['Y'] = 10; dial['Z'] = 10;


  std::string num;
  std::cin >> num;
  int time = 0;
  for (int i = 0; i < num.length(); i++)
  {
    int y;
    y = dial[num[i]];
    time += y;
  }
  std::cout << time;

  
  
  return 0;
}
