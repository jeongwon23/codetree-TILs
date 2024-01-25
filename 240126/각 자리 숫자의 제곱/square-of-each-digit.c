#include <stdio.h>

// 재귀함수 정의
int sumOfSquares(int n) {
    // 기저 조건: n이 0이면 합은 0
    if (n == 0) {
        return 0;
    } else {
        // 현재 자리 숫자의 제곱 + 나머지 자리 숫자들의 제곱의 합
        int s = n % 10;
        return (s * s) + sumOfSquares(n / 10);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // 각 자리 숫자의 제곱의 합 출력
    printf("%d", sumOfSquares(N));

    return 0;
}