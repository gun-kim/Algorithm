#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    y -= 45;
    if (y < 0) {
        y += 60;
        x -= 1;
        if (x < 0) x = 23;
    }

    cout << x << " " << y;
    return 0;
}
