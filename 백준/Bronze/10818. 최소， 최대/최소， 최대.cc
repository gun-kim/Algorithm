#include <bits/stdc++.h>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N, size;
	std::vector<int> vec = {};

	std::cin >> N;
	for (int i = 0;i < N;i++)
	{
		int k;
		std::cin >> k;
		vec.push_back(k);
	}
	std::sort(vec.begin(), vec.end());
	std::cout << vec.front() << " " << vec.back();


	return 0;
}
