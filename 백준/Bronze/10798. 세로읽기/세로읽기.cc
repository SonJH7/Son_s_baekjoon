#include <iostream>

using namespace std;

int main() {
    char arr1[5][15] = {0};  // 5x15 크기의 배열을 널 문자로 초기화

    // 입력받기
    for (int i = 0; i < 5; i++) {
        string line;
        getline(cin, line);
        for (int j = 0; j < line.size() && j < 15; j++) {
            arr1[i][j] = line[j];
        }
    }

    // 세로로 읽어서 출력하기
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr1[j][i] != 0) {  // 널 문자가 아닌 경우 출력
                cout << arr1[j][i];
            }
        }
    }
    cout << endl;

    return 0;
}
/*#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> arr1(5);
    
    // 입력받기
    for (int i = 0; i < 5; i++) {
        getline(cin, arr1[i]);
    }
    
    // 세로로 읽어서 출력하기
    for (int i = 0; i < 15; i++) {  // 최대 15개의 문자를 읽을 수 있으므로
        for (int j = 0; j < 5; j++) {
            if (i < arr1[j].size()) {  // 현재 열에 문자가 존재하는지 확인
                cout << arr1[j][i];
            }
        }
    }
    cout << endl;
    
    return 0;
}*/ // 더좋은 풀이