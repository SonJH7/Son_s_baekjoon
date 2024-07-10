#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int b = a - 1;

    // 상단 부분
    for (int i = 0; i < a; i++) {
        for (int j = b - i; j > 0; j--)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << "\n";
    }

    // 하단 부분
    for (int i = a - 2; i >= 0; i--) {
        for (int j = 0; j < b - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}

