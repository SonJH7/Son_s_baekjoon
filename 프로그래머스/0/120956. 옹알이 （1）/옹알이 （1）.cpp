#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> all ={
        "aya", "ye", "woo", "ma"
    } ;
    int answer = 0;

    for(int i=0; i<babbling.size(); i++){
        string temp = "";
        int count_sub=0;
        for(char c: babbling[i]){
            temp += c;
            auto it = find(all.begin(),all.end(),temp);
            if( it != all.end()){
                temp ="";
                count_sub++;
            }
        }
        if(temp.length() == 0 && count_sub > 0)
            answer++;
    }
        return answer;
}