#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	set<string> q;
	vector<string> n;

	for(int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;
		q.insert(s);
	}
	
	for (int i = 0; i < M; ++i)
	{
		int k = q.size();
		string s;
		cin >> s;
		q.insert(s);
		if (q.size() == k)
		{
			n.push_back(s);
			continue;
		}
		else
		{
			continue;
		}
	}

	

	cout << n.size() << "\n";
	sort(n.begin(), n.end());
	for (string x : n)
	{
		cout << x << "\n";
	}
}
