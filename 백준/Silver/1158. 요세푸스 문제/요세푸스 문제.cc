#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector <int> arr(n);
    vector <int> result;
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    n=arr.size();
    k--;
    int i= k;
    while(!arr.empty()){
        i%=arr.size();
        result.push_back(arr[i]);
        arr.erase(arr.begin()+ i);
        i+=k;
    }
    cout << "<" << result[0];
    for(int i=1; i<n; i++){
        cout<< ", " << result[i];
    } 
    cout << ">";
}