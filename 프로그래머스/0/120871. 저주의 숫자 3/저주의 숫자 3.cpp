#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int t=0;
    for(int i=1; i<=n; i++){
        t++;
        while(t%3==0 ||t%10 == 3 || t/10 == 3 || t/10 == 13)
            t++;
    }   
    return t;
}