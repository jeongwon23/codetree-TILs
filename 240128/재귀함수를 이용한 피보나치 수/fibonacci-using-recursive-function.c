#include <stdio.h>

// 재귀 함수를 사용하여 N번째 피보나치 수를 계산하는 함수
int fibonacci(int n) {
    // 기저 사례: n이 0 또는 1이면 해당 값 반환
    if (n == 0 || n == 1)
        return n;

    // 이전 두 항의 합을 반환
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // 사용자로부터 N 입력 받기
    int N;
    scanf("%d", &N);

    // N번째 피보나치 수 계산 및 출력
    printf("%d", fibonacci(N));

    return 0;
}