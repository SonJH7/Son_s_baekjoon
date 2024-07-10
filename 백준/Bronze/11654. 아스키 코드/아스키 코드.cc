#include <iostream>
#include <cstring> // strlen 함수를 사용하기 위해 포함

using namespace std;

int main(){
   

    char a;
    cin >> a;

    // 각 문자열의 첫 번째와 마지막 문자를 출력
    cout << a - '0' + 48 ;
    

    return 0;
}
