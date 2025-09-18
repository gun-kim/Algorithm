#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool isNumber(string s) {
	for (char& c : s) {
		if (c < '0' || c > '9') return false;
	}
	return true;
}

int toint(string s) {
	int num = 0;
	for (char c : s) {
		num = num * 10 + (c - '0');
	}
	return num;
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int N, M;
	cin >> N >> M;
	map<int, string> pok;
	map<string, int> rev;

	for (int i = 1; i <= N; i++)
	{
		string x;
		cin >> x;
		pok[i] = x;
		rev[x] = i;
	}




	while (M--)
	{
		string temp;
		cin >> temp;
		if (isNumber(temp))
		{
			int x = toint(temp);
			cout << pok[x] << "\n";
		}
		else
		{
			cout << rev[temp] << "\n";	
			
		}
	}


}