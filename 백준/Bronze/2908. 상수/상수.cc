#include <iostream>


using namespace std;
int change(int num){
    int array[3] = {num/100, (num/10)%10, num%10};
    int temp = array[0];
    array[0] = array[2];
    array[2] = temp;
    
    return array[0]*100 + array[1]*10 + array[2];
}

int main() {
    int first, second; 
    
    cin >> first >> second;
    
    
    int first_number = change(first);
    int second_number = change(second);
    
    
    if (first_number > second_number)
        cout << first_number;
    else
        cout << second_number;
    
    return 0;
}
