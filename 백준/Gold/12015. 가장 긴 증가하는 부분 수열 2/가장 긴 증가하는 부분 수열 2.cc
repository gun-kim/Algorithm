#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> dowon(n);
  for (int i = 0; i < n; ++i)
    cin >> dowon[i];

  vector<int> tails;
  tails.push_back(dowon[0]);

  for (int i = 1; i < n; ++i)
  {
    int k = lower_bound(tails.begin(), tails.end(), dowon[i]) - tails.begin();
    
    if (k < tails.size())
      tails[k] = dowon[i];
    else
      tails.push_back(dowon[i]);
  }

  cout << tails.size();



}
