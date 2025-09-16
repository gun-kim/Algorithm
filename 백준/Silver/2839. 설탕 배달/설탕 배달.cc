#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	int count = -1;
	int sum = N;
	bool is_true = false;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (3 * i + 5 * j == sum)
			{
				if (is_true == false)
				{
					count = i + j;
					is_true = true;
					continue;
				}
				count = min(count, i + j);
				is_true = true;
				continue;
			}
		}


	}
	

	cout << count;

	
	

}