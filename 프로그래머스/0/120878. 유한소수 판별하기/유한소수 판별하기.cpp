#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int a, int b) {
    int g = gcd(a, b);
    b /= g;

    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;

    return (b == 1) ? 1 : 2;
}