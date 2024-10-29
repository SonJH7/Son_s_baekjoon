#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> s1 = {1, 2, 3, 4, 5};
    vector<int> s2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int c1 = 0, c2 = 0, c3 = 0;
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == s1[i % s1.size()]) c1++;
        if (answers[i] == s2[i % s2.size()]) c2++;
        if (answers[i] == s3[i % s3.size()]) c3++;
    }
    
    // 가장 높은 점수를 찾기
    int max_score = max({c1, c2, c3});
    
    if (c1 == max_score) answer.push_back(1);
    if (c2 == max_score) answer.push_back(2);
    if (c3 == max_score) answer.push_back(3);
    
    return answer;
}
