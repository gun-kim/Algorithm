#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(nullptr);


  void kan(int start, int length, vector<char>&vec);
  int N;
  while (cin >> N)
  {

    if (0 > N || N > 12)
    {
      return 0;
    }
    if (N == 0)
    {
      cout << "-" << "\n";
      continue;
    }
    
    int K = pow(3, N);
    vector<char> vec(K, '-');
    kan(0, K, vec);

    for (char c : vec) cout << c;
    cout << "\n";
  
  }


  return 0;
}

void kan(int start, int length ,vector<char>& vec)
{
  if (length == 1) return;

  int div = length / 3;
  for (int i = start + div; i < start + 2 * div; i++)
  {
    vec[i] = ' ';
  }

  kan(start, div, vec);
  kan(start + 2 * div, div, vec);
}