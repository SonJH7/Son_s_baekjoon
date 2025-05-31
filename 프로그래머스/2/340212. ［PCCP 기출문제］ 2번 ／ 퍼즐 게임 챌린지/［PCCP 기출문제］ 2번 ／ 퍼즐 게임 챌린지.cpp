#include <string>
#include <vector>
#include <algorithm>  // max_element 사용을 위해 필요
using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int n = diffs.size();
    // 최대 난이도를 구해두면 이분 탐색 상한(high)으로 사용 가능
    int max_diff = *max_element(diffs.begin(), diffs.end());

    // 주어진 level에 대해 "모든 퍼즐을 풀었을 때 총 시간"이 limit 이하인지 체크
    auto canSolveWithin = [&](int level) -> bool {
        long long total = 0;
        // 첫 번째 퍼즐(i=0)은 무조건 틀리지 않으므로 times[0] 추가
        total += times[0];
        if (total > limit) return false;

        // i >= 1인 퍼즐들
        for (int i = 1; i < n; ++i) {
            int diff = diffs[i];
            int tcur = times[i];
            int tprev = times[i - 1];

            if (level >= diff) {
                // 틀리지 않고 한 번에 풀 수 있음
                total += tcur;
            } else {
                // 틀리는 횟수 = diff - level
                long long mistakes = (long long)diff - level;
                // 틀린 동안: mistakes * (tcur + tprev) + 마지막에 맞추는 tcur
                total += tcur + mistakes * ( (long long)tcur + tprev );
            }
            // 중간에 limit을 초과하면 더 이상 볼 필요 없음
            if (total > limit) return false;
        }
        return (total <= limit);
    };

    // 이분 탐색: 가능한 최소 level 찾기
    int low = 1;
    int high = max_diff;
    int answer = max_diff;  // 최악의 경우 max_diff가 답

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canSolveWithin(mid)) {
            // mid 수준으로 충분히 제한 시간 안에 해결 가능 → 더 낮은 숙련도도 가능할지 확인
            answer = mid;
            high = mid - 1;
        } else {
            // mid 숙련도로는 시간 초과 → 숙련도를 높여야 함
            low = mid + 1;
        }
    }

    return answer;
}
