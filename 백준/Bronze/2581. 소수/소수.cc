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
    int n,m,first_number, count=0, sum=0;
    cin >> m >> n;
    for(int i=m; i<=n; i++){
        if(is_prime(i)){
            sum += i;
            count++;
            if(count == 1 )  
                first_number = i;
        }
        
    }
    if(sum == 0)
        cout << -1;
    else    
        cout << sum << "\n" << first_number;    
   
    return 0;
}