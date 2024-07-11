#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string r;
    cin >> r;
    vector<int>a (26,0);
    int i, m_v = 0, m_i;
    
    for(i=0; i<r.length(); i++){
        r[i] = toupper(r[i]);
        a[r[i]-'A'] += 1;   
    }

    for(i=0; i<26; i++){
        if(a[i] > m_v){
            m_v = a[i];
            m_i = i;     //최댓값의 인덱스 찾기
        }
    }
    
    sort(a.begin(),a.end());
    if (a[24] == m_v)
        cout << "?";
    else
        cout << (char)(m_i + 'A'); //형변환
    return 0;
}