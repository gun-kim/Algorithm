#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int sum = i;
		string s = to_string(i);

		if (i <= 10)
		{
			if (sum == N)
			{
				cout << i;
				return 0;
			}
		}

		for (char& k : s)
		{
			sum = sum +  (k - '0');

		}

		if (sum == N)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;


	
}