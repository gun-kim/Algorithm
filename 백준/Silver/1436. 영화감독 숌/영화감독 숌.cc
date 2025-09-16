#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	int x = 666;
	int count = 0;
	for (long long i = 0; i < INT_MAX; i++)
	{
		string s = to_string(i);
		if (s.find("666") != string::npos) {
			if (++count == N) { cout << i; return 0; }
		}
		

	}

	
}