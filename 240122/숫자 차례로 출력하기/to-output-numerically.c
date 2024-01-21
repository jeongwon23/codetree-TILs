#include <stdio.h>

// 재귀 함수 정의
void func(int n) {
    int i;
    if (n <= 0) {
        return;
    } else {
        func(n - 1);
        printf("%d ",n);
    }
}

void func1(int n) {
    int i;
    if (n <= 0) {
        return;
    } else {
        printf("%d ",n);
        func1(n - 1);
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
        func(N);
        printf("\n");
        func1(N);
    }

    return 0;
}