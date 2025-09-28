#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);

  int n;
  cin >> n;

  int m = 0;
  for (int i = 1; i <= n; ++i)
    m += i;
  
  vector<int> dp(m+1, 0);

  for (int i = 0; i < n; ++i)
  {
    for (int j = i; j >= 0; --j) {
      int x; cin >> x;
      if (j == 0) dp[j] = dp[j] + x;
      else if (j == i) dp[j] = dp[j - 1] + x;
      else dp[j] = max(dp[j - 1], dp[j]) + x;
    }
  }
  cout << *max_element(dp.begin(), dp.end()) << "\n";
}