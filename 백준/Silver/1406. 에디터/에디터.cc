/* 처음의 string 시간초과 코드
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    char command;
    int n;
    
    cin >> s;
    cin >> n;
    int cursor = s.length();
    
    for(int i=0; i<n; i++){
        cin >> command;
        char x;
        if( command == 'P' )
              cin >> x;
        switch(command[0]){
            case 'L':{
                if(cursor == 0)
                    break;
                cursor--;
                break;
            }
            case 'D':{
                if(cursor == s.length())
                    break;
                cursor++;
                break;
            }
            case 'B':{
                if(cursor == 0)
                    break;            
                s.erase(cursor-1, 1);
                cursor--;
                break;
            }
            case 'P':{
                s.insert(cursor, x);
                cursor++;
                break;
            }
        }
    }
    return 0;
}*/
//list는 삽입, 삭제에 O(1), 배열은 O(N)
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int n;
    cin >> s >> n;
    
    list<char> editor(s.begin(), s.end());  
    auto cursor = editor.end();             
    
    while (n--) {
        char command;
        cin >> command;

        if (command == 'L') {
            if (cursor != editor.begin()) cursor--;  
        }
        else if (command == 'D') {
            if (cursor != editor.end()) cursor++;    
        }
        else if (command == 'B') {
            if (cursor != editor.begin()) {
                cursor = editor.erase(--cursor);     
            }
        }
        else if (command == 'P') {
            char x;
            cin >> x;
            editor.insert(cursor, x);             
        }
    }
    
    for (char c : editor) {
        cout << c;
    }
    
    return 0;
}
