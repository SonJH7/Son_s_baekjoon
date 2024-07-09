#include <iostream>

using namespace std;


int main() {
    int dial_time = 0;
    char ALphabet[16];
    
    cin >> ALphabet;

   for(int i = 0; ALphabet[i] != '\0'; i++){
       if('A' <= ALphabet[i] && ALphabet[i] <= 'C')
            dial_time += 3;
        else if ('D' <= ALphabet[i] && ALphabet[i] <= 'F')
            dial_time += 4;
        else if ('G' <= ALphabet[i] && ALphabet[i] <= 'I')
            dial_time += 5;
        else if ('J' <= ALphabet[i] && ALphabet[i] <= 'L')
            dial_time += 6;
        else if ('M' <= ALphabet[i] && ALphabet[i] <= 'O')
            dial_time += 7;
        else if ('P' <= ALphabet[i] && ALphabet[i] <= 'S')
            dial_time += 8;
        else if ('T' <= ALphabet[i] && ALphabet[i] <= 'V')
            dial_time += 9;
        else if ('W' <= ALphabet[i] && ALphabet[i] <= 'Z')
            dial_time += 10;
   }
   cout << dial_time;
    
    return 0;
}
