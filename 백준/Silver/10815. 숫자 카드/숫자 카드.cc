#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int N;
	cin >> N;
	set<int> k1;
	vector<int> k2;

	for(int j = 0; j< N; j++)
	{
		int x;
		cin >> x;
		k1.insert(x);
	}

	int M;
	cin >> M;

	while (M--)
	{
		int x;
		cin >> x;
		k2.push_back(x);
	}

	for (int& i : k2)
	{
		k1.insert(i);
		if (k1.size() == N)
		{
			cout << 1 << " ";
		}
		else
		{
			k1.erase(i);
			cout << 0 << " ";
		}
	}


}