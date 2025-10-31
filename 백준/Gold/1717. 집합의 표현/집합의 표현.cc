#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int find(int x, vector<int>& parent) {
	if (parent[x] == x) return x;
	return parent[x] = find(parent[x], parent);
}

void unite(int a, int b, vector<int>& parent) {
	a = find(a, parent);
	b = find(b, parent);
	if (a != b)
	{
		parent[a] = b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> parent(n + 1);
	for (int i = 0; i <= n; ++i)
		parent[i] = i;

	while (m--)
	{
		int cmd, a, b;
		cin >> cmd >> a >> b;

		if (cmd == 0)
		{
			unite(a, b, parent);
		}
		else if (cmd == 1)
		{
			if (find(a, parent) == find(b, parent))
			{
				cout << "yes\n";
			}
			else
				cout << "no\n";
		}


	}
	
}