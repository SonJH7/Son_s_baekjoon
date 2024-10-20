#include <iostream>

using namespace std;
int count_d(int *a){
    int count_zero = 0, count_one = 0;
    for(int i=0; i<=3;i++){
        if(a[i]==0)
            count_zero++;//배
        else
            count_one++;
    }
    return count_zero*10 +count_one;
}
char check_what(int c){
    if(c == 13)
        return 'A';
    else if (c == 22)
        return 'B';
    else if (c == 31)
        return 'C';
    else if ( c == 40)
        return 'D';
    else 
        return 'E';
}

int main()
{
    int a[4], b[4], c[4];
    int d;
    for(int i=0; i<=3; i++)
        cin >> a[i];
    d = count_d(a);    
    cout << check_what(d) << "\n";
    for(int i=0; i<=3; i++)
        cin >> b[i];
    d = count_d(b);    
    cout << check_what(d) << "\n";
    for(int i=0; i<=3; i++)
        cin >> c[i];
    d = count_d(c);    
    cout << check_what(d) << "\n";
    return 0;
    
}