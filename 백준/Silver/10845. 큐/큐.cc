#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    queue <int> q;
    string command;
    
    for(int i=0; i<n; i++){
        cin >> command;
        if(command == "push"){
                cin >> x;
                q.push(x);
            }
        else if( command == "pop"){
             if(q.empty())
                cout << "-1\n";
            else{
                cout << q.front() << endl;
                q.pop();   
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