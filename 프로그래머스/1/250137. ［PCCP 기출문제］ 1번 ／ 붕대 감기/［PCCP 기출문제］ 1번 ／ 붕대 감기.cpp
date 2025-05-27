#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int i=0;
    int con=0;
    int max_h=health;
    for(int t=0; t<=attacks[attacks.size()-1][0]; t++){
        if(health<=0){
            answer = -1;
            return answer;
        }
            
        if(t==attacks[i][0]){  //몬스터 공격 로직
            health-=attacks[i][1];
            i++;
            con=0;
        }
        else{ // 체력 회복 로직
        if(health<max_h){
            if(health+bandage[1] > max_h){
                health= max_h; //최대 체력 오버 플로우 제한 
            }
            else {
                health+=bandage[1];
            }
                
            con++;
            if(con == bandage[0]){ // 추가 회복 로직
                if(health+bandage[2] > max_h){
                health= max_h; //최대 체력 오버 플로우 제한 
                }
                else{
                health += bandage[2];
                con =0;
                }
            }
          }
        }
            
    }
    
    if(health<=0)
        answer= -1;
    else
        answer=health;
    return answer;
}