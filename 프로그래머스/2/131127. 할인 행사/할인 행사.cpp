#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector <string> want_extend;
    for(int i=0; i<want.size(); i++){
        for(int j=0; j<number[i]; j++){
            want_extend.push_back(want[i]);
        }
    }
    sort(want_extend.begin(), want_extend.end());
    for(int i=0; i<discount.size()- 9; i++){
        vector<string> s(discount.begin()+i,discount.begin()+i+10);
        sort(s.begin(),s.end());
        int j=0;
        while(want_extend[j] == s[j]){
            j++;
        }
        if(j == 10)
            answer++;
    }
    return answer;
}