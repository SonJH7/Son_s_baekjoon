#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    stack <char> c;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(')
            c.push(s[i]);
        else if(s[i] == ')'){
            c.pop();
            if(s[i-1]=='('){
                count += c.size();
            }
            else
                count ++;
        }
    }
    cout << count;

    return 0;
}