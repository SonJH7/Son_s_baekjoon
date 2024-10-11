#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector <int> a(26, 0);
    string s;
    cin >> s;
    for(char c : s){
        a[c - 'a'] ++;
    }
    for(int i : a){
        cout << i << " ";
    }
    
    
    return 0;
}