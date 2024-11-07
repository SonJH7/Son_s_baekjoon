#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

bool check_right(string s){
    stack <char> st;
    for(int i=0; i<s.length(); i++){
        if((s[i] == '}' || s[i] == ']' || s[i] == ')' )&& st.empty())
            return false;
        if(s[i] == '{' || s[i] == '[' || s[i] == '(')
            st.push(s[i]);
        else if(s[i] == '}' && st.top() == '{'){
            st.pop();
        }
        else if(s[i] == ']' && st.top() == '['){
            st.pop();
        }
        else if(s[i] == ')' && st.top() == '('){
            st.pop();
        }
    }
     if(st.empty())
            return true;
        else
            return false;
}

int solution(string s) {
    int answer = 0;
    
    for(int i=0; i<s.length(); i++){
        if(check_right(s))
            answer++;
        char temp = s[0];
        for(int j=0; j<s.length(); j++){    
            char temp = s[j+1];
            s[j+1] = s[j];
            s[j]  = temp;
        }
        s[s.length()-1] = temp;
    }
    return answer;
}