#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> stk;

    for (char c : s) {
        if (c == '(') stk.push(-1);
        else if (c == '[') stk.push(-2);
        else {
            int val = 0;
            while (!stk.empty() && stk.top() > 0) {
                val += stk.top();
                stk.pop();
            }

            if (stk.empty()) { cout << 0; return 0; }

            if (c == ')' && stk.top() == -1) {
                stk.pop();
                stk.push(val == 0 ? 2 : val * 2);
            }
            else if (c == ']' && stk.top() == -2) {
                stk.pop();
                stk.push(val == 0 ? 3 : val * 3);
            }
            else {
                cout << 0;
                return 0;
            }
        }
    }

    int result = 0;
    while (!stk.empty()) {
        if (stk.top() < 0) { cout << 0; return 0; }
        result += stk.top();
        stk.pop();
    }

    cout << result;
    return 0;
}
