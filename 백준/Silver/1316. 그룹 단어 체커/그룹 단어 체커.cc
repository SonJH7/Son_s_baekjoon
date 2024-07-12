#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    int count = a;

    for (int i = 0; i < a; i++) {
        string group;
        cin >> group;
        vector<int> al(26, 0); // 각 단어마다 알파벳 벡터를 초기화

        for (int j = 0; j < group.length(); j++) {
            // 현재 문자가 이미 사용되었고, 이전 문자와 같지 않으면 그룹 단어가 아님
            if (al[group[j] - 'a'] == 1 && group[j] != group[j - 1]) {
                count--;
                break;
            }
            al[group[j] - 'a'] = 1; // 현재 문자를 사용 표시
        }
    }

    cout << count << endl;
    return 0;
}
