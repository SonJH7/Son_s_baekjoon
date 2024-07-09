#include <iostream>
#include <cstring>  // 문자열 함수를 사용하기 위한 헤더

using namespace std;

int main() {
    char s[101];
    int alphabet[26];

    // 초기화 부분
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    // 문자열 입력 받기
    cin >> s;

    // 문자열을 순회하면서 알파벳 위치 기록
    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';  // 변수 이름 중복을 피하기 위해 index로 변경
        if (alphabet[index] == -1) {  // 최초 등장 위치만 기록
            alphabet[index] = i;
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}
