#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A[9];

	for (int i = 0; i < 9; i++)
	{
		int x;
		cin >> x;
		A[i] = x;
	}

	int Max = 0;
	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		if (A[i] > Max)
		{
			Max = A[i];
			count = i;
		}
	}
	cout << Max << "\n" << count+1;

}
