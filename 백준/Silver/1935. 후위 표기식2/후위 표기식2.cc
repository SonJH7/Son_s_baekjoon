#include <iostream>
#include <stack>
#include <iomanip>  // setprecision
using namespace std;

int main() {
    int n;
    cin >> n;

    string expr;
    cin >> expr;

    double value[26];  // A~Z에 해당하는 값 저장
    for (int i = 0; i < n; i++) {
        cin >> value[i];  // A부터 차례대로 저장됨
    }

    stack<double> st;

    for (char c : expr) {
        if ('A' <= c && c <= 'Z') {
            st.push(value[c - 'A']);  // 알파벳을 인덱스로 사용
        } else {
            double b = st.top(); st.pop();
            double a = st.top(); st.pop();
            double result;

            switch (c) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
            }

            st.push(result);
        }
    }

    cout << fixed << setprecision(2) << st.top() << "\n";
    return 0;
}
