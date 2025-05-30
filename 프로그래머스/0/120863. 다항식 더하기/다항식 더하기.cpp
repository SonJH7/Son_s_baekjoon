#include <string>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    int coefX = 0;     // x 항의 계수 합
    int constSum = 0;  // 상수항 합

    // " + " 단위로 분할하기 위해 stringstream 사용
    stringstream ss(polynomial);
    string token;
    while (ss >> token) {
        if (token == "+") continue;  // 연산자 무시

        // 'x'로 끝나면 일차항
        if (token.back() == 'x') {
            string num = token.substr(0, token.size() - 1);
            // "x" 혹은 "1x" 인 경우 계수 1
            coefX += (num.empty() ? 1 : stoi(num));
        }
        else {
            // 숫자만 있는 상수항
            constSum += stoi(token);
        }
    }

    // 결과 문자열 만들기
    string result;
    if (coefX != 0) {
        // 계수 1 은 생략
        result += (coefX == 1 ? "x" : to_string(coefX) + "x");
    }
    if (constSum != 0) {
        // 앞에 이미 x항이 있으면 " + " 붙이기
        if (!result.empty()) result += " + ";
        result += to_string(constSum);
    }

    // x항도 없고 상수항도 0인 경우 (예: "0"을 표현해야 한다면)
    if (result.empty()) {
        result = "0";
    }

    return result;
}
