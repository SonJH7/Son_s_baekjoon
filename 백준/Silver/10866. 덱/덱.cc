#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    deque <int> q;
    string command;
    
    for(int i=0; i<n; i++){
        cin >> command;
        if(command == "push_front"){
                cin >> x;
                q.push_front(x);
            }
        else if(command == "push_back"){
                cin >> x;
                q.push_back(x);
            }    
        else if( command == "pop_front"){
             if(q.empty())
                cout << "-1\n";
            else{
                cout << q.front() << endl;
                q.pop_front();   
                }
            }
        else if( command == "pop_back"){
             if(q.empty())
                cout << "-1\n";
            else{
                cout << q.back() << endl;
                q.pop_back();   
                }
            }
        else if( command == "size"){  
                cout << q.size() << endl;
            }
        else if( command == "empty"){
                cout << q.empty() << endl;
            }
        else if( command == "front"){
            if(q.empty())
                cout << "-1\n";
            else
                cout << q.front() << endl;
            }
        else if( command == "back"){
            if(q.empty())
                cout << "-1\n";
            else
                cout << q.back() << endl;
            }
    }
    return 0;
}