#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::deque<std::pair<int, int>> dq;  // (풍선 번호, 이동 값)

    for (int i = 0; i < N; i++) {
        int k;
        std::cin >> k;
        dq.push_back({i + 1, k});  // 1번부터 시작
    }

    std::vector<int> result;  // 결과 저장

    while (!dq.empty()) {
        int move = dq.front().second;  // 현재 풍선의 이동 값
        result.push_back(dq.front().first);  // 풍선 번호 저장
        dq.pop_front();  // 풍선 제거

        if (dq.empty()) break;  // 모든 풍선을 터뜨렸으면 종료

        if (move > 0) {  
            for (int i = 0; i < move - 1; i++) {  // 오른쪽 이동 (앞에서 뒤로 보냄)
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {  
            for (int i = 0; i < -move; i++) {  // 왼쪽 이동 (뒤에서 앞으로 보냄)
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    // 결과 출력
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) std::cout << " ";  // 마지막 공백 제거
    }

    return 0;
}
