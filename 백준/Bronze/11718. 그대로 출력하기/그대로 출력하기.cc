#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    
    // 입력이 있는 동안 계속해서 라인을 읽고 출력합니다.
    while (getline(cin, line)) {
        cout << line << endl;
    }

    return 0;
}