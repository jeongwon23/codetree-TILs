#include <stdio.h>

// 재귀 함수 정의
void printHelloWorld(int n) {
    if (n <= 0) {
        return;
    } else {
        printf("HelloWorld\n");
        printHelloWorld(n - 1);
    }
}

int main() {
    int N;

    // 사용자로부터 정수 N 입력
    scanf("%d", &N);

    if (N <= 0) {
        printf("N은 1 이상의 양수여야 합니다.\n");
    } else {
        // 재귀 함수 호출
        printHelloWorld(N);
    }

    return 0;
}