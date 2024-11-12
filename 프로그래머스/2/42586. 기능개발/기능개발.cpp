#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    
    vector<int> a;
    for(int i=0; i<progresses.size(); i++){
        int t=0;
        while(progresses[i]<100){
            progresses[i] += speeds[i];
            t++;    
        }
        cout << t << '\n';
        a.push_back(t);
    }
    vector<int> answer;
    int answer_t=1;
    int max_element = a[0];
    for(int i=1; i<a.size(); i++){
        if (a[i]>max_element){
            answer.push_back(answer_t);
            answer_t = 1;
            max_element = a[i];
        }
        else
            answer_t++;
    }
    answer.push_back(answer_t);

    return answer;
}