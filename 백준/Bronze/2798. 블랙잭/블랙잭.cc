#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	vector<int> x;
	cin >> N >> M;
	while (N--)
	{
		int k;
		cin >> k;
		x.push_back(k);
	}
	int sum = 0;

	for (int i = 0; i < x.size();i++)
	{
		for (int j = 0; j < x.size();j++)
		{
			for (int k = 0; k < x.size();k++)
			{
				if (i == k || i == j || j == k)
					continue;

				if (x[i] + x[j] + x[k] > M)
					continue;

				if (sum == max(sum, x[i] + x[j] + x[k]))
					continue;

				sum = x[i] + x[j] + x[k];

				if (sum == M)
				{
					cout << sum;
					return 0;
				}
			}
		}
	}
	cout << sum;

}