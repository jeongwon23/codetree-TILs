#include <stdio.h>

// n에서 시작하여 1이 되기까지의 반복 횟수를 반환하는 재귀 함수
int repeatCount(int n) {
    // 기저 사례: n이 1이면 더 이상 반복할 필요가 없으므로 0 반환
    if (n == 1)
        return 0;

    // 짝수일 경우 2로 나누고, 홀수일 경우 3을 곱하고 1을 더하여 재귀 호출
    if (n % 2 == 0)
        return repeatCount(n / 2) + 1;
    else
        return repeatCount(3 * n + 1) + 1;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    scanf("%d", &n);

    // 반복 횟수 출력
    printf("%d", repeatCount(n));

    return 0;
}