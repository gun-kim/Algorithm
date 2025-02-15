#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int N;
  std::deque<int> deck;

  std::cin >> N;

  while (N--) {
    int cmd;
    std::cin >> cmd;

    if (cmd == 1) {
      int x;
      std::cin >> x;
      deck.push_front(x);
    } 
    else if (cmd == 2) {
      int x;
      std::cin >> x;
      deck.push_back(x);
    } 
    else if (cmd == 3) {
      if (!deck.empty()) {
        std::cout << deck.front() << "\n";
        deck.pop_front();
      } else {
        std::cout << "-1\n";  // 개행 추가
      }
    } 
    else if (cmd == 4) {
      if (!deck.empty()) {
        std::cout << deck.back() << "\n";
        deck.pop_back();
      } else {
        std::cout << "-1\n";  // 개행 추가
      }
    } 
    else if (cmd == 5) {
      std::cout << deck.size() << "\n";
    } 
    else if (cmd == 6) {
      std::cout << (deck.empty() ? "1\n" : "0\n");
    } 
    else if (cmd == 7) {
      if (!deck.empty()) {
        std::cout << deck.front() << "\n";
      } else {
        std::cout << "-1\n";  // 개행 추가
      }
    } 
    else if (cmd == 8) {
      if (!deck.empty()) {
        std::cout << deck.back() << "\n";
      } else {
        std::cout << "-1\n";  // 개행 추가
      }
    }
  }

  return 0;
}
