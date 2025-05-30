#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    if (A.size() != B.size()) return -1;

    string sA = A, sB = B;
    sort(sA.begin(), sA.end());
    sort(sB.begin(), sB.end());
    if (sA != sB) return -1;

    int n = A.size();
    for (int cnt = 0; cnt < n; cnt++) {
        if (A == B) return cnt;     
        char c = A.back();
        A.pop_back();
        A.insert(A.begin(), c);
    }

    return -1; 
}
