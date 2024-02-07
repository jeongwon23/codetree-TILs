#include <stdio.h>

int main() {
    // 입력 받기
    int M, D;
    scanf("%d %d", &M, &D);

    // 각 월별 일수를 배열로 저장
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 입력된 월과 일이 유효한지 확인
    if (M < 1 || M > 12 || D < 1 || D > days_in_month[M - 1]) {
        printf("No\n");
        return 0;
    }

    // 해당 날짜가 2021년에 존재하는지 확인
    if (M == 2 && D == 29) { // 2021년은 윤년이 아니므로 2월 29일은 존재하지 않음
        printf("No\n");
    } else {
        printf("Yes\n");
    }

    return 0;
}