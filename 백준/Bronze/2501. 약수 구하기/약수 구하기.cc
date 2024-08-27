#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int count = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
            if (count == b) {
                cout << i << endl;
                return 0;
            }
        }
    }
    
    // 만약 루프가 끝나도 K번째 약수를 찾지 못하면 0을 출력
    cout << 0 << endl;
    
    return 0;
}
