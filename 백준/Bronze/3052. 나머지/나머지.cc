#include <bits/stdc++.h>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int arr1[10], arr2[10];
	for (int i = 0;i < 10;i++)
	{
		std::cin >> arr1[i];
		arr2[i] = (arr1[i] % 42);
	}
	int num = 0;
	for (int j = 0;j < 42;j++)
	{
		for (int i = 0;i < 10;i++)
		{
			if (arr2[i] == j)
			{
				num++;
				break;
			}
		}
	}
	std::cout << num;



	return 0;
}
