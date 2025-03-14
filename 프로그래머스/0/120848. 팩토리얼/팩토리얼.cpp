#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, i=1;
    while(i<=n){
        answer++;
        i*=answer;
    }
    answer--;
    return answer;
}