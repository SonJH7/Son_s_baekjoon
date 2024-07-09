#include <iostream>

using namespace std;

int main() {
    char s[21];
    int test_count, repeat_count;
    cin >> test_count; //테스트 케이스 수 입력받기
    
    //반복 횟수와 문자열 입력받기
    for (int i = 0; i < test_count ; i++) {
        cin >> repeat_count >> s ; 
        // 문자열 끝날떄까지 반복
        for (int k = 0; s[k] != '\0'; k++){
            // 반복 횟수만큼 출력
            for(int j = 0; j < repeat_count; j++){
                cout << s[k];
            }
        }
        cout << '\n';
    }

    return 0;
}