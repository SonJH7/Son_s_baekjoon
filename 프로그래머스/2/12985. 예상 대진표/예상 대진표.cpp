int solution(int n, int a, int b)
{
    int answer = 0;

    // 두 참가자가 같은 대진표에 있을 때까지 계속 진행
    while (a != b) {
        a = (a + 1) / 2; // 다음 라운드로 이동
        b = (b + 1) / 2; // 다음 라운드로 이동
        answer++;
    }

    return answer;
}
