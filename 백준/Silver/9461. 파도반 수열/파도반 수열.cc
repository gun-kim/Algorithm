#include <bits/stdc++.h>

using namespace std;


long long dp[105];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    for (int i = 6; i <= n; ++i)
    {
      dp[i] = dp[i - 1] + dp[i - 5];
    }

    cout << dp[n] << "\n";


  }
}