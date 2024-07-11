#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string r;
    cin >> r;
  
    int i, count = 0;
    
    for(i=0; i<r.length(); i++){
        if((r[i] <= 'z' && r[i] >= 'a') && (r[i+1] == '=' || r[i+1] == '-')){
            count++;i++;
        }
        else if(r[i] == 'd' && r[i+1] == 'z' && r[i+2] == '='){
            count++;i++;i++;
        }
        else if(r[i] == 'l' && r[i+1] == 'j'){
            count++;i++;
        }
        else if(r[i] == 'n' && r[i+1] == 'j'){
            count++;i++;
        }
        else
            count++;
    }

    
    cout << count; //형변환
    return 0;
}