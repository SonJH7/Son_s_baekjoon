#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    map<int,int, greater<int>> m;
    
    
    for(int i=0; i<emergency.size(); i++){
        m[emergency[i]] = 0;  //map의 키는 자동정렬
    }
    int count = 1;
    for(auto& [key,value] : m){
        value= count++; 
    }
    for(int i=0; i<emergency.size(); i++){
        answer[i] = m[emergency[i]];
        }
    return answer;
}