#include <stdio.h>

#define MAX_SIZE 100

int A[MAX_SIZE];

void calculatePrefixSum(int n) {
    for (int i = 1; i < n; i++) {
        A[i] += A[i - 1];
    }
}

int getRangeSum(int a, int b) {
    if (a == 0) {
        return A[b];
    } else {
        return A[b] - A[a - 1];
    }
}

int main() {
    int n, m;

    // 입력 받기
    scanf("%d %d", &n, &m);

    // 수열 A 입력 받기
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // 누적 합 계산
    calculatePrefixSum(n);

    // 각 숫자쌍의 합 출력
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", getRangeSum(a - 1, b - 1));
    }

    return 0;
}