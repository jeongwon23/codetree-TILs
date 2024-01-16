#include <stdio.h>

int isPerfectNumber(int num) {
    if (num % 2 == 0) {
        return 0;
    }

    if (num % 10 == 5) {
        return 0;
    }

    if (num % 3 == 0 && num % 9 != 0) {
        return 0;
    }

    return 1;
}

int countPerfectNumbers(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPerfectNumber(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = countPerfectNumbers(a, b);

    printf("%d ", result);

    return 0;
}