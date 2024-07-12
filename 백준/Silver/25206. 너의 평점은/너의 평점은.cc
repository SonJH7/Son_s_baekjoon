#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    float total_hak = 0, hak, grade, total_grade = 0;
    string g;
   

    for(int i=0; i<20; i++){
        getline(cin, g);
        
        if(g[g.length() -1] == 'P'){
            grade = 0.0;
            hak = 0.0;}
        else if(g[g.length() -1] == 'F'){
            hak = g[g.length() -5] - '0';
            grade = 0.0;}
        else if(g[g.length() -1] == '+'){
            hak = g[g.length() -6] - '0';
            grade = 4-(g[g.length() -2] -'A') + 0.5;
        }
        else
        {
            hak = g[g.length() -6] - '0';
            grade = 4-(g[g.length() -2] -'A') + 0.0;
        }
        total_grade += grade*hak;
        total_hak += hak;
    }
    
    cout << fixed << setprecision(6) << total_grade/total_hak << endl;
    return 0;
}