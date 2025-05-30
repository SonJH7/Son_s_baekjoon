#include <vector>
using namespace std;

vector<int> solution(int num, int total) {
    // 1) 등차수열의 합 공식 활용:
    //    total = num * start + num*(num-1)/2
    //    → start = (total - num*(num-1)/2) / num
    int start = (total - num * (num - 1) / 2) / num;

    vector<int> ans;
    ans.reserve(num);
    for (int i = 0; i < num; i++) {
        ans.push_back(start + i);
    }
    return ans;
}
