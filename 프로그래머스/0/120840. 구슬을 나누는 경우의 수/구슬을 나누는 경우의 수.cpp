#include <vector>

using namespace std;

long long comb(int n, int k) {
    if (k == 0 || n == k) return 1;
    long long result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int solution(int balls, int share) { 
    return comb(balls, share);
}