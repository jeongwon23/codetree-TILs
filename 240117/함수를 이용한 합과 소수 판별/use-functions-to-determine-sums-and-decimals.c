#include <stdio.h>
#include <stdbool.h>

// 소수 판별 함수
bool prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// 자릿수의 합이 짝수인지 확인하는 함수
bool even(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 2 == 0;
}

// 주어진 범위 내에서 소수이면서 모든 자릿수의 합이 짝수인 수의 개수를 세는 함수
int sum(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (prime(i) && even(i)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int a, b;

    // 사용자로부터 정수 a, b 입력 받기
    scanf("%d %d", &a, &b);

    // 함수 호출 및 결과 출력
    int result = sum(a, b);
    printf("%d", result);

    return 0;
}