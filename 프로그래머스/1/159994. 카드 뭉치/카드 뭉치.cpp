#include <string>
#include <vector>
#include <queue>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    queue <string> q1;
    queue <string> q2;
    vector <string> q;
    for(int j=0; j<cards1.size(); j++){
            q1.push(cards1[j]);
        }
    for(int j=0; j<cards2.size(); j++){
            q2.push(cards2[j]);
    }
    
    for(int i=0; i<goal.size(); i++){
        if(goal[i] == q1.front()){
            q.push_back(q1.front());
            q1.pop();
        }
        if(goal[i] == q2.front()){
            q.push_back(q2.front());
            q2.pop();
        }
    }
    int j=0;
    while(q[j] == goal[j]){
        j++;
    }
    if(j == goal.size())
        answer = "Yes";
    else
        answer = "No";
    return answer;
}