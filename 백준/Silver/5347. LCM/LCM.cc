#include <iostream>
#include <numeric>
using namespace std;
long long LCM(int a, int b){
    return 1LL * a * b / gcd(a, b); 
}

int main(){
    int n,a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >>b;
        cout << LCM(a,b)<< "\n";
    }
    return 0;
}