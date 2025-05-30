#include <vector>
using namespace std;

int solution(vector<int> array) {

    vector<int> freq(1000, 0);
    for (int v : array) {
        freq[v]++;
    }

    //  최댓값 빈도 찾기
    int maxCount = 0;
    for (int f : freq) {
        if (f > maxCount) {
            maxCount = f;
        }
    }

    // 최댓값 빈도를 갖는 값이 몇 개인지 세기
    int mode = -1;
    int modeCount = 0;
    for (int val = 0; val < (int)freq.size(); val++) {
        if (freq[val] == maxCount) {
            mode = val;
            modeCount++;
            if (modeCount > 1) {
                return -1;
            }
        }
    }

    return mode;
}
