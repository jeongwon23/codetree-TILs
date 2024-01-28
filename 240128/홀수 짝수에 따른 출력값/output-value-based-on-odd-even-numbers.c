#include <stdio.h>

// 1부터 n까지의 홀수의 합을 계산하는 재귀 함수
int sumOdd(int n) {
    // 기저 사례: n이 1이면 1 반환
    if (n == 1)
        return 1;

    // n이 홀수인 경우 현재 값(n)과 이전 홀수까지의 합을 더함
    if (n % 2 != 0)
        return n + sumOdd(n - 2);
    // n이 짝수인 경우 이전 값까지의 합을 반환
    else
        return sumOdd(n - 1);
}

// 2부터 n까지의 짝수의 합을 계산하는 재귀 함수
int sumEven(int n) {
    // 기저 사례: n이 2면 2 반환
    if (n == 2)
        return 2;

    // n이 홀수인 경우 현재 값(n-1)과 이전 짝수까지의 합을 더함
    if (n % 2 != 0)
        return n - 1 + sumEven(n - 2);
    // n이 짝수인 경우 이전 값까지의 합을 반환
    else
        return sumEven(n - 1);
}

int main() {
    // 사용자로부터 정수 N 입력 받기
    int N;
    scanf("%d", &N);

    // N이 홀수인 경우 홀수의 합 출력, 짝수인 경우 짝수의 합 출력
    if (N % 2 != 0) {
        printf("%d",sumOdd(N));
    } else {
        printf("%d", sumEven(N));
    }

    return 0;
}