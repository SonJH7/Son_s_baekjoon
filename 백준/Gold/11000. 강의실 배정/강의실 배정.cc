#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> c(n);
    for(int i=0; i<n; i++){
        cin >> c[i].first >> c[i].second;
    }
    
    sort(c.begin(),c.end());
    priority_queue<int, vector <int>,greater<int>> pq;
    pq.push(c[0].second);
    
    for (int i = 1; i < n; i++) {
        
        if (c[i].first >= pq.top()) {
            pq.pop(); 
        }
        pq.push(c[i].second);  
    }

    cout << pq.size();
    return 0;
}