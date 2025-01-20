#include <bits/stdc++.h>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::vector<std::string> str;
	std::string S;
	int T;
	std::cin >> T;
	std::cin.ignore(); // 개행 문자 무시
	for (int i = 0;i < T;i++)
	{
		std::getline(std::cin, S);
		str.push_back(S);

	}
	for (int i = 0;i < T;i++)
	{
		std::cout << str[i].front() << str[i].back() << std::endl;
	}

	return 0;
}
