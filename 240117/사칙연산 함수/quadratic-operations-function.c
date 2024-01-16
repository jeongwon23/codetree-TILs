#include <stdio.h>

// 덧셈 함수
int add(int a, int b) {
    return a + b;
}

// 뺄셈 함수
int subtract(int a, int b) {
    return a - b;
}

// 곱셈 함수
int multiply(int a, int b) {
    return a * b;
}

// 나눗셈 함수
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: 0으로 나눌 수 없습니다.\n");
        return 0;
    }
}

int main() {
    char operator;
    int operand1, operand2;

    // 사용자로부터 연산식 입력 받기
    scanf("%d %c %d", &operand1, &operator, &operand2);

    // 적절한 연산 함수 호출 및 결과 출력
    if (operator == '+') {
        printf("%d %c %d = %d\n", operand1, operator, operand2, add(operand1, operand2));
    } else if (operator == '-') {
        printf("%d %c %d = %d\n", operand1, operator, operand2, subtract(operand1, operand2));
    } else if (operator == '*') {
        printf("%d %c %d = %d\n", operand1, operator, operand2, multiply(operand1, operand2));
    } else if (operator == '/') {
        int result = divide(operand1, operand2);
        if (operand2 != 0) {
            printf("%d %c %d = %d\n", operand1, operator, operand2, result);
        }
    } else {
        printf("False\n");
    }

    return 0;
}