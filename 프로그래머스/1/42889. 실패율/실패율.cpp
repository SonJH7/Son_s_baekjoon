#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    multimap<double, int, greater<double>> m; // 실패율 기준 내림차순 정렬
    int n = stages.size();

    for (int i = 1; i <= N; i++) {
        int c = count(stages.begin(), stages.end(), i);
        double d = (n == 0) ? 0.0 : (double)c / n; // 실패율 계산
        n -= c;
        m.insert({d, i}); // 실패율과 스테이지 번호 저장
    }

    for (const auto& p : m) {
        answer.push_back(p.second); // 정렬된 스테이지 번호 추가
    }

    return answer;
}
