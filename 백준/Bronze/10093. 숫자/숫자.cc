#include <iostream>
using namespace std;


int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    long long int a , b;
    cin >> a >> b;
    if(a > b){
        long long int temp = b;
        b = a; a= temp;
    }
    if (a == b) {
        cout << 0 << '\n';  
    } else {
        cout << b - a - 1 << '\n';
        for (long long int i = a + 1; i < b; i++) 
            cout << i << " ";
    }
}