#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int a;
    cin >> a;
    int count =0;
    vector <int> d(a);
    for(int i=0; i<a; i++){
        cin >> d[i];
    }
    int x;
    cin >> x;
    sort(d.begin(), d.end());
    int left = 0;
    int right = a-1;
    while(left < right){
        int sum = d[left] + d[right];
        if(sum == x){
            count++;
            left++;
            right--;
        }
        else if(sum > x){
            right--;
        }
        else
            left++;
    }
    
    cout << count;
    return 0;
}