#include <stdio.h>

int sum(int n) {
    // 기저 조건: n이 0이면 합은 0
    if (n == 0) {
        return 0;
    } else {
        // 재귀 호출: 현재 숫자와 나머지 숫자들의 합을 반환
        return n + sum(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // 1부터 N까지의 합 계산 및 출력
    printf("%d",sum(N));

    return 0;
}