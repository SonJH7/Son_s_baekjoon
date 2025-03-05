#include <iostream>

using namespace std;

int main(){
    int N, i = 0, a, count = 0;
    cin >> N;
    int arr[N];
    for(i;i<N;i++){
        cin >> arr[i];
    }
    cin >> a;
    for(i = 0; i < N; i++){
        if(arr[i] == a)
            count ++;
        
    }
    cout << count;
    return 0;
}