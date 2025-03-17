#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0, count =0;
    for(int i=0; i<k; i++){
        if(i == k-1)
            answer = numbers[count];
        count +=2;
        count%=numbers.size();
    }
    return answer;
}