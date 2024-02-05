#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;  // 0과 1은 소수가 아님
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
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
        if (is_prime(i)) {
            total += i;
        }
    }

    printf("%d\n", total);
    return 0;
}