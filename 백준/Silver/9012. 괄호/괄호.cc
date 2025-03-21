#include <iostream>
#include <stack>

using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        stack <char> st;
        for(int j=0; j<s.length(); j++){
            if(s[j] == '(')
                st.push(s[j]);
            else {
                if(st.empty())
                    st.push(s[j]);
                else if(st.top() == '(')
                    st.pop();
            }
        }
        if(st.empty())
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}