#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<pair<int, int>> dq;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        dq.push_back({i, num}); 
    }

    while (!dq.empty()) {
        auto [index, move] = dq.front();
        dq.pop_front();
        cout << index << " ";

        if (dq.empty()) break;

        if (move > 0) {
            for (int i = 0; i < move - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < -move; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}
