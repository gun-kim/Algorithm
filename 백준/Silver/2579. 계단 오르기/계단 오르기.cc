#include <bits/stdc++.h>

using namespace std;

int dp[301][3];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);

  int floor;
  cin >> floor;

  vector<int> score;
  for (int i = 0; i < floor; ++i)
  {
    int x;
    cin >> x;
    score.push_back(x);
  }

  dp[1][1] = score[0];
  dp[1][2] = 0;
  dp[2][1] = score[1];
  dp[2][2] = dp[1][1] + score[1];
  
  for (int i = 3; i <= floor; ++i)
  {
    dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + score[i - 1];
    dp[i][2] = dp[i - 1][1] + score[i - 1];
  }

  cout << max(dp[floor][1], dp[floor][2]);
  
}