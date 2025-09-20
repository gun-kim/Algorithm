#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << std::lcm(N, M) << '\n';   // C++17
    }
}
