#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int n = 1;
    int sum = 0;

    // 대각선 번호를 찾는다
    while (sum + n < X) {
        sum += n;
        n++;
    }

    int indexInDiagonal = X - sum;  // 해당 대각선에서의 위치

    int numerator, denominator;

    if (n % 2 == 0) {
        // 짝수 대각선: 왼쪽 아래에서 오른쪽 위로
        numerator = indexInDiagonal;
        denominator = n - indexInDiagonal + 1;
    } else {
        // 홀수 대각선: 오른쪽 위에서 왼쪽 아래로
        numerator = n - indexInDiagonal + 1;
        denominator = indexInDiagonal;
    }

    cout << numerator << "/" << denominator << endl;

    return 0;
}
