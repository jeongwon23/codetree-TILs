#include <stdio.h>

// 홀수의 합을 계산하는 재귀 함수
int sumOdd(int n) {
    // 기저 사례: n이 1 이하일 때 0 반환
    if (n <= 1)
        return n;

    // 홀수인 경우 현재 값(n)과 이전 홀수까지의 합을 더함
    return n + sumOdd(n - 2);
}

// 짝수의 합을 계산하는 재귀 함수
int sumEven(int n) {
    // 기저 사례: n이 2 이하일 때 0 반환
    if (n <= 2)
        return n;

    // 홀수인 경우 현재 값(n-1)과 이전 짝수까지의 합을 더함
    return n - 1 + sumEven(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    // N이 홀수인 경우 홀수의 합 출력, 짝수인 경우 짝수의 합 출력
    if (n % 2 != 0) {
        printf("%d", sumOdd(n));
    } else {
        printf("%d", sumEven(n));
    }

    return 0;
}