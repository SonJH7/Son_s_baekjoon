#include <iostream>


using namespace std;


int main() {
    int a, money;
    cin >> a;
    int arr[4] = {0};
    
    for (int i = 0; i < a; i++) {
        cin >> money;
        
        
        arr[0] = money/25;
        money %= 25;
        cout << arr[0] << " ";
    
        arr[1] = money/10;
        money %= 10;
        cout << arr[1] << " ";
        
        arr[2] = money/5;
        money %= 5;
        cout << arr[2] << " ";
        
        arr[3] = money;
        cout << arr[3] << " ";
    }
   
    
    return 0;
}
