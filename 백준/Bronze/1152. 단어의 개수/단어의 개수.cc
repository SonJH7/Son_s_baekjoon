#include <iostream>


using namespace std;

int main() {
    char s[1000001];
    cin.getline(s, 1000001);  // 문자열 입력 받기, 공백 포함

    int word_count = 0;

    for (int k = 0; s[k] != '\0'; k++) {
        // 첫 문자와 마지막 문자가 공백일 경우 처리
        if ((k == 0 && s[k] != ' ') || (s[k] == ' ' && s[k+1] != ' ' && s[k+1] != '\0')) {
            word_count++;
        }
    }

    cout << word_count;
    return 0;
}
