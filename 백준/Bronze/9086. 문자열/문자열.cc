#include <iostream>

using namespace std;

int main(){
    int n;
    char arr[1001],arr1[1001],arr2[1001];
    cin >> n;
    cin >> arr;
    cin >> arr1;
    cin >> arr2;
    int i = 0, j = 0, k = 0;
    while(arr[i]!='\0'){
        i++;
    }
    cout << arr[0] << arr[i-1] << endl;
    while(arr1[j]!='\0'){
        j++;
    }
    cout << arr1[0] << arr1[j-1] << endl;
    
    while(arr2[k]!='\0'){
        k++;
    }
    cout << arr2[0] << arr2[k-1] << endl;
    return 0;
}