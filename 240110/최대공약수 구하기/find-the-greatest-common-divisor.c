#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    if (a > b) {
        return gcd(a - b, b);
    } else {
        return gcd(a, b - a);
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int result = gcd(num1, num2);
    
    printf("%d", result);

    return 0;
}