#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	long long sum = 1;
	for (int i = 2; i <= N; ++i)
	{
		sum *= i;
	}
	cout << sum;

}