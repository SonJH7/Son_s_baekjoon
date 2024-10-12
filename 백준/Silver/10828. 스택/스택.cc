#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    stack <int> st;
    string command;
    
    for(int i=0; i<n; i++){
        cin >> command;
        if(command == "push"){
                cin >> x;
                st.push(x);
            }
        else if( command == "pop"){
             if(st.empty())
                cout << "-1\n";
            else{
                cout << st.top() << endl;
                st.pop();   
                }
            }
        else if( command == "size"){  
                cout << st.size() << endl;
            }
        else if( command == "empty"){
                cout << st.empty() << endl;
            }
        else if( command == "top"){
            if(st.empty())
                cout << "-1\n";
            else
                cout << st.top() << endl;
            }
    }
    return 0;
}