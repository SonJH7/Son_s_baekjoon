#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(!st.empty() && s[i] == st.top()  )
            st.pop();
        
        else 
            st.push(s[i]);
        
            
    }
    if(st.empty())
        answer+=2;
    else
        answer++;
    return answer;
}