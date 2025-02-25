#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> a(9,0);
    
    int n, set=0; 
    cin >> n;
    while(n>0){
        int temp = n%10;
        if( temp == 9)
            temp = 6;
        a[temp]++;
        n/=10;
    }
    a[6] = (a[6] +1)/2; 
    set = *max_element(a.begin(), a.end());
    cout << set;
    return 0;
}