#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string s;
    int j, change = 0;
    
    cin >> s >> j;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            change += (s[i]-'0') * pow(j,s.length()-i-1);
        else
            change += ((s[i]-'A')+10) * pow(j,s.length()-i-1);
    }
    cout << change;

    return 0;
}