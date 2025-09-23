#include <bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
	int n;
	cin >> n;

	priority_queue<long long, vector<long long>, greater<long long>> pq;
  for (int i = 0; i < n * n; i++) {
    long long g;
    cin >> g;
    pq.push(g);
    if ((int)pq.size() > n) pq.pop();  // n개만 유지
  }
  cout << pq.top() << "\n";
}