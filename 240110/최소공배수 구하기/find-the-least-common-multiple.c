#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    // 최소공배수 = |a * b| / 최대공약수
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int result = lcm(num1, num2);
    
    printf("%d", result);

    return 0;
}