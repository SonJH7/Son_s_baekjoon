#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string r;
    cin >> r;
    int len = r.length(), count = 0;
    char copy[len];
    for(int i=0; i<len; i++){
        copy[i] = r[i];    //string b = a; 이거 가능
    }
    for(int i=0; i<len/2; i++){
        
        char temp = r[i];
        r[i] = r[len-i-1]; //reverse(b.begin(),b.end()) #algorithm
        r[len -i-1] = temp;
    }
    for(int i=0; i<len; i++){
        if (copy[i] == r[i])
            count++;
    }
    if (count == len)
        cout << 1;
    else
        cout << 0;
    return 0;
}
