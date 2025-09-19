#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main() {

	int k = 5;
	size_t max_string = 0;
	vector<vector<char>> input;
	while (k--)
	{
		string s;
		cin >> s;
		max_string = max(max_string, s.size());
		vector<char> c;
		for (char& p : s)
		{
			c.push_back(p);
		}
		input.push_back(c);
	}


	for (size_t i = 0; i < max_string; ++i)
		for (int r = 0; r < 5; ++r)
			if (i < input[r].size()) cout << input[r][i];

}
