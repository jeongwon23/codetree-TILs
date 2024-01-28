#include <stdio.h>

// n의 각 자릿수의 합을 반환하는 함수
int DigitSum(int n) {
    if (n < 10)
        return n;

    return DigitSum(n / 10) + n % 10;
}

int main() {
    // 변수 선언 및 입력:
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", DigitSum(a * b * c));

    return 0;
}