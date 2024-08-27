#include <iostream>
using namespace std;

bool is_prime(int s){
    int i = 2;
    if(s == 1)
        return false;
    else if(s == 2)
        return true;
    else{
        while(i < s){
            if(s%i ==0)
                return false;
            i++;
        }
        return true;
    }
    
}

int main()
{
    int n, count=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(is_prime(arr[i]))
            count++;
    }
    cout << count;    
   
    return 0;
}