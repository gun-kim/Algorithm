#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);


  int t;
  cin >> t;
  while (t--)
  {
    int m;
    cin >> m;

    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;

    vector<int> output;

    for (int i = 0; i < m; ++i)
    {
      int input;
      cin >> input;
      if (left.empty() || left.top() >= input)
        left.push(input);
      else
        right.push(input);


      int x = left.size() - right.size();

      // 균형 맞추기
      if (x >= 2)
      {
        right.push(left.top());
        left.pop();
      }
      else if (x < 0)
      {
        left.push(right.top());
        right.pop();
      }

      if (i % 2 == 0)
      {
        output.push_back(left.top());
      }
    }

    cout << output.size() << "\n";

    int count = 0;
    for (auto a : output)
    {
      if (count % 10 == 0 && count != 0)
      {
        cout << "\n";
      }

      cout << a << " ";
      count += 1;

    }
    cout << "\n";
  }



}