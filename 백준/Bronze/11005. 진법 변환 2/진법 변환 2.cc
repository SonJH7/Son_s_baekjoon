#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    long long int j, c;
    
    cin >> j >> c;
    
    while(j>0){
    int digit = j % c;
    s += (digit < 10) ? (digit + '0') : (digit - 10 + 'A');
    j/=c;
    }
    reverse(s.begin(), s.end());
    
    cout << s << endl;
    return 0;
}