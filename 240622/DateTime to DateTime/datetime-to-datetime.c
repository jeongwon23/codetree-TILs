#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int start_day = 11;
    int start_hour = 11;
    int start_minute = 11;

    // 각 시간 단위의 총 분수 계산
    int total_minutes_start = (start_day - 1) * 24 * 60 + start_hour * 60 + start_minute;
    int total_minutes_end = (a - 1) * 24 * 60 + b * 60 + c;

    if (total_minutes_end < total_minutes_start) {
        printf("-1\n");
    } else {
        // 총 경과 시간 계산
        int elapsed_minutes = total_minutes_end - total_minutes_start;
        printf("%d\n", elapsed_minutes); // 경과 분 출력
    }

    return 0;
}