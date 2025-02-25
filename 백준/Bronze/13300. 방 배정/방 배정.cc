#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int a, k;
    cin >> a >> k;
    
    int count = 0;
    int gender, grade;
    
    // 학년과 성별에 따라 학생 수를 저장하는 2차원 배열
    vector<vector<int>> d(2, vector<int>(6, 0));
    
    // 입력 받기
    for(int i = 0; i < a; i++){
        cin >> gender >> grade;
        d[gender][grade - 1]++;
    }
    
    // 학년과 성별별로 필요한 방 개수를 계산
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++) {
            count += (d[i][j] + k - 1) / k;  // 학생 수를 방의 크기 k로 나누고 나머지가 있으면 방을 하나 더 추가
        }
    }
    
    // 결과 출력
    cout << count;
    
    return 0;
}