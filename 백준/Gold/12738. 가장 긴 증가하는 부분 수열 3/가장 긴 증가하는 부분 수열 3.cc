#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <long long> A(n);

	for (int i = 0; i < n; ++i)
		cin >> A[i];

	vector <long long> dp;
	dp.push_back(A[0]);

	for (int i = 0; i < n; ++i)
	{
		int t = lower_bound(dp.begin(), dp.end(), A[i]) - dp.begin();
		if (t < dp.size())
			dp[t] = A[i];
		else
			dp.push_back(A[i]);
	}

	cout << dp.size();

}