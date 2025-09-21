#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
	if (num == 1)
	{
		return false;
	}
	if (num == 2 || num == 3)
	{
		return true;
	}
	for (int j = 2; j <= sqrt(num); ++j)
	{
		if (num % j == 0)
		{
			return false;
		}
	}
	return true;


}

int main()
{
	int n, m;
	cin >> n >> m;

	for (n; n <= m; ++n)
	{
		if (isPrime(n))
		{
			cout << n << "\n";
		}
		continue;
	}

}