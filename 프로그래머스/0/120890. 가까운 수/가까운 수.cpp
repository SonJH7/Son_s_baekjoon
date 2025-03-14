#include <map> 
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    sort(array.begin(),array.end());
    multimap<int, int> m;  // 중복 키를 허용하는 multimap

    for(int i=0 ; i<array.size(); i++){
        m.insert({abs(array[i]-n), array[i]});  //insert만 가능
    }

    answer = m.begin()->second;  // 
    return answer;
}
