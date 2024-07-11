#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    
    string r, b;
    cin >> r;
    b = r;
    reverse(b.begin(),b.end());
    if (b == r)
        cout << 1;
    else
        cout << 0;
    return 0;
}