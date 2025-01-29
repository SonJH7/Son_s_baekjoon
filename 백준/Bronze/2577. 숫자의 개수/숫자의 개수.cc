#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    string d = to_string(a * b * c);
    vector<int> arr(10,0);
    for(int i=0; i<d.length(); i++){
        arr[d[i]-'0']++;
    }
    for(int i=0; i<10; i++){
        cout << arr[i] << "\n";
    }
    return 0;
    
}