#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int N, k;
  std::cin >> N >> k;

  std::vector<int> num1;
  std::vector<int> num2;
  
  // 초기 숫자 리스트 설정 (1~N)
  for (int i = 1; i <= N; i++) {
    num1.push_back(i);
  }

  int index = 0;
  while (!num1.empty()) {
    index = (index + k - 1) % num1.size(); // 다음 제거할 인덱스 계산
    num2.push_back(num1[index]); // 해당 인덱스 요소 추가
    num1.erase(num1.begin() + index); // 해당 요소 제거
  }

  // 출력 포맷 조정
  std::cout << "<";
  for (size_t i = 0; i < num2.size(); i++) {
    std::cout << num2[i];
    if (i != num2.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << ">\n";

  return 0;
}
