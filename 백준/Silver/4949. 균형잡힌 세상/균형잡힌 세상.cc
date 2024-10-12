#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string c;
    
    while (true) {
        getline(cin, c);  // 한 줄 전체 입력
        if (c == ".") break;
        stack<char> s;
        bool balanced = true;  // 균형 여부를 확인하는 플래그
        
        for(int i=0; c[i]!= '\0'; i++){
            if(c[i] == '(' || c[i] == '[') {
                s.push(c[i]);
            }
            else if(c[i] == ')' || c[i] == ']') {
                if(s.empty()) {
                    balanced = false;
                    break;
                }
                if((c[i] == ')' && s.top() == '(') || (c[i] == ']' && s.top() == '[')) {
                    s.pop();
                } else {
                    balanced = false;
                    break;
                }
            }
        }

        if(!s.empty()) balanced = false;

        if(balanced)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
