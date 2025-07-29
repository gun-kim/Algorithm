#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int matrix[9][9];
	vector<int> foundMax;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> matrix[i][j];
			foundMax.push_back(matrix[i][j]);
		}
	}

	int max_val = *max_element(foundMax.begin(), foundMax.end());
	cout << max_val << "\n";
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max_val == matrix[i][j])
			{
				cout << i+1 << " " << j+1;
				return 0;
			}
		}
	}
}