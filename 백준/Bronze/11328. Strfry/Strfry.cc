#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;  // 테스트 케이스의 수
    cin >> n;
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;

        // 두 문자열의 길이가 다르면 바로 Impossible 출력
        if (s1.length() != s2.length()) {
            cout << "Impossible" << endl;
            continue;
        }

        // 알파벳 개수를 저장하는 배열 (소문자만)
        vector<int> count(26, 0);
        
        // 첫 번째 문자열의 문자 개수 카운트
        for (char c : s1) {
            count[c - 'a']++;
        }
        
        // 두 번째 문자열의 문자 개수 카운트 감소
        for (char c : s2) {
            count[c - 'a']--;
        }
        
        // 카운트가 모두 0이면 Possible, 그렇지 않으면 Impossible
        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}
