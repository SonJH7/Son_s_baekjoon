#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> word;
    char temp = words[0][0];
    int word_len = 0;
    int person_index = 1;
    int index = 1;
    for(int i=0; i<words.size(); i++){
        
        
        if(words[i][0] != temp){
            answer.push_back(person_index);
            answer.push_back(index);
            return answer;
        }
        temp = words[i][words[i].size()-1];
        word.insert(words[i]);
        word_len++;
        
        if(word.size()!= word_len){
            answer.push_back(person_index);
            answer.push_back(index);
            return answer;
        }
        
        
        if(person_index % n == 0){
            person_index = 1;
            index++;
        }
        else
            person_index++;
    }

    answer.push_back(0);
    answer.push_back(0);
    return answer;
}