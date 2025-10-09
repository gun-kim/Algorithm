#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> k(n+1);

	for (int i = 1; i <= n; ++i)
		k[i] = i;

	for (int i = 0; i < m; ++i)
	{
		int p, q;
		cin >> p >> q;

		int o = k[p];
		k[p] = k[q];
		k[q] = o;

	}
	for (int i = 1; i <= n; ++i)
		cout << k[i] << " ";




}