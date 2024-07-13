#include <iostream>

using namespace std;

int main(){
   int arr1[9][9];
   int max = -1, max_i[2];
  
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> arr1[i][j];
            if(max < arr1[i][j]){
                max = arr1[i][j];
                max_i[0] = i;
                max_i[1] = j;
            }
        }
    }

    cout << max << endl;
        
    cout << max_i[0]+1 << " " << max_i[1]+1;
    

    return 0;
}