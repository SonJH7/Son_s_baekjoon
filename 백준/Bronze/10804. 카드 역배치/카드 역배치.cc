#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int arr[2];
    vector <int> a (20);
    for(int i=1; i<=20; i++)
        a[i-1] = i;
    for(int i=0; i<10; i++){
        cin >> arr[0] >> arr[1];
         reverse(a.begin() + (arr[0] - 1), a.begin() + arr[1]);
    }
    
    for(int i=0; i<20; i++)
        cout << a[i] << " ";
    return 0;
}