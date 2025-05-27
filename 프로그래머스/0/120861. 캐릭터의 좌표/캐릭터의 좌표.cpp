#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int a=0, b=0;
    for(int i=0; i<keyinput.size(); i++){
        if( keyinput[i] == "left" && a>((-1)*board[0]/2))
            a--;
        if( keyinput[i] == "right"&& a<board[0]/2)
            a++;
        if( keyinput[i] == "up"&& b<board[1]/2)
            b++;
        if( keyinput[i] == "down"&& b>((-1)*board[1]/2))
            b--;
    }
    answer.push_back(a);
    answer.push_back(b);
    return answer;
}