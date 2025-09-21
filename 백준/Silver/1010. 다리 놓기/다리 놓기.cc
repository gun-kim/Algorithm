#include <bits/stdc++.h>
using namespace std;

long long comb(int n, int r) {
    if (r < 0 || r > n) return 0;
    r = min(r, n - r);          // 대칭성 이용
    long long res = 1;
    for (int i = 1; i <= r; ++i) {
        res = res * (n - r + i) / i;  // 곱하고 곧바로 나눔(항상 나누어떨어짐)
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int N, M; 
        cin >> N >> M;          // N ≤ M
        cout << comb(M, N) << "\n";
    }
}
