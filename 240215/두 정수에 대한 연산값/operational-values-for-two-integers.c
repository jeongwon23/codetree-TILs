#include <stdio.h>

// 문제에서 설명한 대로 a와 b를 변경합니다.
// call by reference를 구현합니다.
void ChangeNumber(int *a, int *b) {
    if(*a > *b) {
        *b *= 2;
        *a += 25;
    }
    else {
        *a *= 2;
        *b += 25;
    }

    return;
}

int main() {
    // 변수 선언 및 입력:
    int a, b;
    scanf("%d %d", &a, &b);

    ChangeNumber(&a, &b);

    printf("%d %d", a, b);
    
    return 0;
}