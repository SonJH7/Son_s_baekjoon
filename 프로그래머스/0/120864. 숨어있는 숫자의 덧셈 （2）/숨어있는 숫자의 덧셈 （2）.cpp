#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string digit= "";
    
    for(char c: my_string){
        if(isdigit(c))
            digit += c;
        else{
            for(int i=0; i<digit.length(); i++)
                answer += (digit[i]-'0')*(pow(10,digit.length()-i-1));      
            digit = "";
        }
    }        
    
        for(int i=0; i<digit.length(); i++)
            answer += (digit[i]-'0')*(pow(10,digit.length()-i-1)); 
    return answer;
}