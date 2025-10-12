#include <iostream>
using namespace std;

int main() {
  long long X;
  cin >> X;
  int N;
  cin >> N;
  while (N--) {
    long long price;
    int k;
    cin >> price >> k;

    X -= price * k;
  }
  if (X == 0)
    cout << "Yes";
  else
    cout << "No";
}