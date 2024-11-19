#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hashMap;

    // 참가자를 해시 맵에 추가하며 카운트
    for (const auto& p : participant) {
        hashMap[p]++;
    }

    // 완주한 사람을 해시 맵에서 감소
    for (const auto& c : completion) {
        hashMap[c]--;
    }

    // 해시 맵에서 값이 1인 참가자가 완주하지 못한 사람
    for (const auto& entry : hashMap) {
        if (entry.second > 0) {
            return entry.first;
        }
    }

    return "";
}
