#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  std::vector<int> wordCount;
  std::vector<char> wordName;
  std::string word;
  std::cin >> word;

  // 대문자로 변환
  for (char& c : word) {
    c = std::toupper(c);
  }

  // 정렬
  std::sort(word.begin(), word.end());

  // 문자 카운트
  int count = 1;  // 첫 문자는 기본적으로 1로 시작
  for (int i = 0; i < word.length(); i++) {
    if (i < word.length() - 1 && word[i] == word[i + 1]) {
      count++;  // 동일한 문자일 때 count 증가
    }
    else {
      wordCount.push_back(count);
      wordName.push_back(word[i]);  // 문자 저장
      count = 1;  // 다음 문자 초기화
    }
  }

  // 가장 큰 빈도 찾기
  int index = 0;
  bool isDuplicate = false;  // 동일한 빈도가 있는지 체크
  for (int i = 1; i < wordCount.size(); i++) {
    if (wordCount[i] > wordCount[index]) {
      index = i;
      isDuplicate = false;  // 더 큰 값이 나오면 중복 여부 초기화
    }
    else if (wordCount[i] == wordCount[index]) {
      isDuplicate = true;  // 중복된 최대 빈도 발견
    }
  }

  // 결과 출력
  if (isDuplicate) {
    std::cout << "?";  // 최대 빈도가 여러 개일 때
  }
  else {
    std::cout << wordName[index];  // 최대 빈도의 문자 출력
  }

  return 0;
}
