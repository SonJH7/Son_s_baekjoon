#include <iostream>
#include <vector>

using namespace std;

int main(){
   

    int a, sum=0 ;
    cin >> a;
    char arr[a];
    cin >> arr;

    for (int i=0; i<a; i++){
       sum += (arr[i] - '0');
    }
    cout << sum;
    return 0;
}