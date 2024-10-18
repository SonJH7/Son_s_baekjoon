#include <set>
#include <string>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    int px = 0, py = 0;  // 좌표 범위는 -5에서 5로 가정
    set<pair<pair<int, int>, pair<int, int>>> visited;  // 경로를 저장할 set

    for (int i = 0; i < dirs.length(); i++) {
        int nx = px, ny = py;  // 새로운 좌표

        // 방향에 따른 좌표 이동 및 경계 체크
        if (dirs[i] == 'U' && px < 5) nx++;
        else if (dirs[i] == 'D' && px > -5) nx--;
        else if (dirs[i] == 'L' && py > -5) ny--;
        else if (dirs[i] == 'R' && py < 5) ny++;

        // 좌표가 변경된 경우 (경계를 벗어나지 않으면)
        if (nx != px || ny != py) {
            // 경로 기록 (양방향으로 기록)
            pair<int, int> start = {px, py};
            pair<int, int> end = {nx, ny};

            // 만약 해당 경로가 처음 방문한 경로라면 answer 증가
            if (visited.find({start, end}) == visited.end() && visited.find({end, start}) == visited.end()) {
                visited.insert({start, end});
                visited.insert({end, start});
                answer++;
            }

            // 좌표 업데이트
            px = nx;
            py = ny;
        }
    }

    return answer;
}
