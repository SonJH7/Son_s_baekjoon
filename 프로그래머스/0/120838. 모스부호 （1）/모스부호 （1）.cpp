#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;
map<string,char> m = {
    {".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},
    {".",'e'},{"..-.",'f'},{"--.",'g'},{"....",'h'},
    {"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
    {"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},
    {"--.-",'q'},{".-.",'r'},{"...",'s'},{"-",'t'},
    {"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},
    {"-.--",'y'},{"--..",'z'}
};

string solution(string letter) {
    string answer = "";
    stringstream ss(letter);
    string s;
    
    while(!ss.eof()){
        ss >> s;
        auto t = m.find(s);
        if(t != m.end()){
            answer += t-> second;
        }
    }
    return answer;
}