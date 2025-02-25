#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int count = 0;
    vector<int> c(26,0), d(26,0);
    for(int i=0; i<a.length(); i++){
        c[a[i]-'a']++;
    }
    for(int i=0; i<b.length(); i++){
        d[b[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(c[i] > d[i])
            count += c[i] - d[i];
        else
            count += d[i] - c[i];
    }
    cout << count;
    return 0;
}