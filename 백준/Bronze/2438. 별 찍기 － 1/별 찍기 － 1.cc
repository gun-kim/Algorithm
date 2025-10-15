#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	for (int j = 1; j <= n; ++j)
	{
		for (int i = 0; i < j; ++i)
		{
			cout << "*";
		}
		cout << "\n";
	}

}