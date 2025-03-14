#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a[10]= {1,2,6,24,120,720,5040,40320,362880,3628800};
    for(int i=0; i<10; i++){
         if(n<a[i]){
            answer = i;
            break;
         }
    }
    if(answer ==0)
        answer = 10;
    
    return answer;
}