#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int main()
{
// 알고리즘을 생각해보면 
// 3가지 연산 중 가능한 연산을 거쳤을 때,
// 가장 값이 작은 dp 값이 나오는 경우에다가 + 1

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);

  int x;
  cin >> x;



  dp[1] = 0;
  for (int i = 2; i <= x; ++i) {
    dp[i] = dp[i - 1] + 1;           // -1
    if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);  // /2
    if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);  // /3
  }

  cout << dp[x];

}