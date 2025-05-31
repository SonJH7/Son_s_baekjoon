#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int p =0, ops = 0 , ope = 0, v=0;
    string t1,t2,t3,t4;
    for(int i=0; i<5; i++){
        if(i==2)
            continue;
        else
        {
            t1+=pos[i];
            t2+=op_start[i];
            t3+=op_end[i];
            t4+=video_len[i];
        }
    }
    p = stoi(t1); ops=stoi(t2); ope=stoi(t3); v= stoi(t4);
        if( ops<= p && p < ope){
            p = ope;
        }
    for(int i=0; i<commands.size(); i++){
        if(commands[i] =="next"){
            if( p > v -10){
                p=v;               
            }
            else{
            if(p % 100 > 50 ) 
                p += 50;
            else
                p += 10;
            } 
        }
        
        if(commands[i] =="prev"){
            if(p < 10){
                p = 0;
            }
            else{
            if(p %100 < 10 )    
                p -= 50;
            else
                p -= 10; 
           }
        }

        if( ops<= p && p < ope){
            p = ope;
        }
        cout << p << "\n";
        if(p>v)
            p=v;
        if( p<0)
            p=0;
    }
    
    answer = to_string(p);
   if(10>p/100 && p/100>0){
       answer.insert(0,"0");
   }
    else if(p/100 == 0 && p%100 >= 10)
    {
       answer.insert(0,"0");
       answer.insert(0,"0");
    }
    else if(p/100 == 0 && p%100 < 10)
{
       answer.insert(0,"0");
       answer.insert(0,"0");
       answer.insert(0,"0");
}
    
    answer.insert(2,":");
    return answer;
}