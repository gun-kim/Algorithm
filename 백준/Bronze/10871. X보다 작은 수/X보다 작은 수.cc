#include <bits/stdc++.h>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;
	int X;

	std::cin >> N >> X;
	int* A = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> A[i]; 
	}

	for (int j = 0 ; j < N ; j++)
	{
		if (A[j] < X)
		{
			std::cout << A[j] << " ";
		}
	}

	delete[] A; 
	return 0;

}
