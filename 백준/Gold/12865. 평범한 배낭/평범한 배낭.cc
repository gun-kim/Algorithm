#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> w(n + 1);
	vector<int> v(n + 1);

	for (int i = 1; i <= n; ++i)
	{
		cin >> w[i] >> v[i];
	}

	vector<int> dp(k + 1, 0);

	for (int i = 1; i <= n; ++i)
		for (int j = k; j >= w[i]; --j)
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

	cout << dp[k];

}
