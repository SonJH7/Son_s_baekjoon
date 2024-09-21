// 알고리즘 string n 받고 적정 수(자릿수 *10) 만 분해합 성립여부 확인 후 벡터에 append 아닌 경우 n--
// 그 후 정렬로 가장 작은 분해합의 자연수 출력
#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
using namespace std;

bool bunhae(int n, int copy_n){
    int sum = n;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    if(sum == copy_n)
        return true;
    else
        return false;
}

int main()
{
    string n;
    cin >> n;
    
    int copy = stoi(n);
    int n_len = n.length()*9;
    
    vector <int> n_bunhae;
    
    for(int i=copy - n_len; i<copy; i++){
        if(bunhae(i, copy))
            n_bunhae.push_back(i);
    }
    if(!n_bunhae.empty()){
        sort(n_bunhae.begin(), n_bunhae.end());
        cout << n_bunhae[0] << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}