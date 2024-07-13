#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    
    vector<vector<int>> canvas(100, vector<int>(100, 0));

    for (int k = 0; k < n; k++) {
        int x, y;
        cin >> x >> y;

        // 색종이의 위치에 해당하는 도화지 영역을 1로 표시
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                canvas[i][j] = 1;
            }
        }
    }

  
    int black_area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (canvas[i][j] == 1) {
                black_area++;
            }
        }
    }

    // 검은색 영역의 넓이를 출력
    cout << black_area << endl;

    return 0;
}
