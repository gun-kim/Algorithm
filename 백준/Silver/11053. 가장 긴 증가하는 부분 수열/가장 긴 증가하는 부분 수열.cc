#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);

  int n;
  cin >> n;
  vector<int> su(n + 1);
  for (int i = 1; i <= n; ++i)
  {
    cin >> su[i];
  }

  vector<int> dp(n+1, 0);
  
  dp[1] = 1;

  for (int i = 2; i <= n; ++i)
  {
    int k = 0;
    for (int j = 1; j < i; ++j)
    {
      if (su[i] > su[j])
      {
        k = max(dp[j], k);
      }
    }
    dp[i] = k + 1;
  }
 
  cout << *max_element(dp.begin() + 1, dp.end());
  

}