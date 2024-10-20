#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int a,b,c;
    cin >> a >> b >> c;
    int e= a*b*c;
    vector <int> d(10,0);
    for(int i=0; e>0; i++){
        d[e%10]++;
        e/=10;
    }
    
    for(int i=0; i<10; i++)
        cout << d[i] << "\n";
    return 0;
}