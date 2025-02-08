#include <bits/stdc++.h>

int count(std::string str);

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string word;
  std::cin >> word;
  std::cout << count(word);
  return 0;
}

int count(std::string str)
{
  std::string alpa[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

  for (int i = 0;i < 8;i++)
  {
    while (1)
    {
      if (str.find(alpa[i]) != std::string::npos)
      {
        str.replace(str.find(alpa[i]), alpa[i].length(), "#");
      }
      else break;
    }
  }
  return str.length();
}