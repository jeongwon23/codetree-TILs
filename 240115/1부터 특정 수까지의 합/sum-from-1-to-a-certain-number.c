#include <stdio.h>

// 1부터 N까지의 합을 10으로 나눈 몫을 반환하는 함수
int calculateSum(int N) {
    int sum = 0;

    // 1부터 N까지의 합 구하기
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    // 합을 10으로 나눈 몫 반환
    return sum / 10;
}

int main() {
    int N;

    // 사용자로부터 정수 N 입력 받기
    scanf("%d", &N);

    // 함수 호출 및 결과 출력
    int result = calculateSum(N);
    printf("%d", result);

    return 0;
}