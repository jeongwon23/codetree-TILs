#include <stdio.h>

int func(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && n != i) {
            return 0;  // 소수가 아닌 경우
        }
    }
    return 1;  // 소수인 경우
}

int main() {
    int a, b;
    int total = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (func(i)) {
            total += i;
        }
    }
    printf("%d", total);
    return 0;
}