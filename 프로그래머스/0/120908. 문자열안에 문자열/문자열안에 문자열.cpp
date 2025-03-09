#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2, check=1;
    for(int i=0; i<str1.length(); i++){
        if(str1[i] == str2[0]){
            int n=i+1;
            for(int j=1; j<str2.length(); j++){
                
                cout << "n= " <<n << ", j= "<< j << endl;
                if(str1[n] == str2[j]){
                    check++;
                }
                cout << "check: " << check << endl;
                n++;
            }
            if(check == str2.length()){
                answer = 1;
                return answer;
            }
            else
                check = 1;
        }
    }
    return answer;
}