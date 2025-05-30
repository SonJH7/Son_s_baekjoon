

int solution(int chicken) {
    int answer = 0, temp =0;
    int coupon = chicken;
    while(coupon>10){
    answer += coupon/10;
    if(!(coupon%10==0))
        temp = coupon%10;
    coupon /=10;
    coupon += temp;
    }
        answer += coupon/10;

    return answer;
}