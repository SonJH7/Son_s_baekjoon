
using namespace std;

int solution(int n) {
    int i = 1;
    while((6*i) % n !=0){
        i++;
    }
    return i;
}