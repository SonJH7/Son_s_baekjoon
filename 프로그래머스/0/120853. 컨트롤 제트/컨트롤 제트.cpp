#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int solution(string s) {
    stringstream ss(s);
    string token;
    vector<int> stack; // 마지막에 추가된 숫자를 지우기 위한 스택 역할

    while (ss >> token) {
        if (token == "Z" && !stack.empty()) {
            stack.pop_back(); // 마지막 추가된 숫자 제거
        } else if (token != "Z") {
            stack.push_back(stoi(token)); // 숫자로 변환 후 추가
        }
    }

    int sum = 0;
    for (int num : stack) {
        sum += num;
    }
    return sum;
}