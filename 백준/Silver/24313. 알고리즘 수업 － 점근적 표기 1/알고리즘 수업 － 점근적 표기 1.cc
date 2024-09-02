
#include <iostream>

using namespace std;

int main()
{   
    int a1, a0;
    cin >> a1 >> a0; // 모든 n >= n0 (a1-c)*n <= -a0
    int c;
    cin >> c;
    int n0;
    cin >> n0;
    
    if( a1 == c )
        cout << "1";
    else if((a1 - c) < 0 && ((c-a1)*n0) >= a0 )
        cout << "1";
    else
        cout<< "0";

    return 0;
}