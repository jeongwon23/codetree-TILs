#include <stdio.h>

// 세 정수 중 최솟값을 구하는 함수
int findMin(int a, int b, int c) {
    int min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    return min;
}

int main() {
    int a, b, c;

    // 사용자로부터 세 정수 입력 받기
    scanf("%d %d %d", &a, &b, &c);

    // 함수 호출 및 결과 출력
    int minValue = findMin(a, b, c);
    printf("%d", minValue);

    return 0;
}