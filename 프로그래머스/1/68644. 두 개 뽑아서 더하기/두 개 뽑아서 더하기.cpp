#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> answer;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            answer.insert(numbers[i]+numbers[j]);
        }
    }
    vector<int> s(answer.begin(), answer.end());;
    return s;
}