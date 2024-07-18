#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    int layer = 1;
    int rooms = 1;

    while (rooms < N) {
        rooms += 6 * layer;
        layer++;
    }

    cout << layer << endl;
    return 0;
}
