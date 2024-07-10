#include <iostream>
 
using namespace std;
void countone(int num){
    if(num > 1)
        cout << 1 - num << " ";
    else if(num < 1)
        cout << 1 << " ";
    else
        cout << 0 << " ";
}
void counttwo(int num){
    if(num > 2)
        cout << 2 - num << " ";
    else if(num < 2)
        cout << 2 - num << " ";
    else
        cout << 0 << " ";
}
int main(){
    int a,b,c,d,e,f;
    cin >> a >> b>> c >>d >> e >>f;
    countone(a);
    countone(b);
    counttwo(c);
    counttwo(d);
    counttwo(e);
    
    if(f > 8)
        cout << 8 - f ;
    else if(f < 8)
        cout << 8 - f ;
    else
        cout << 0 ;
    
    
    return 0;
}