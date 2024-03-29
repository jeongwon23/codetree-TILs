#include <stdio.h> // 표준 입출력 라이브러리를 포함합니다.

// a와 b의 값을 변경하는 함수입니다.
// C에서는 참조에 의한 호출을 지원하지 않으므로, 포인터를 사용하여 이를 구현합니다.
void ChangeNumber(int *a, int *b) { // 포인터를 매개변수로 받습니다.
    if(*a > *b) { // a가 b보다 클 경우
        *b *= 2; // b의 값을 2배로 만듭니다.
        *a += 25; // a에 25를 더합니다.
    }
    else { // a가 b보다 작거나 같을 경우
        *a *= 2; // a의 값을 2배로 만듭니다.
        *b += 25; // b에 25를 더합니다.
    }

    return; // 함수를 종료합니다.
}

int main() { // 메인 함수입니다.
    int a, b; // 변수 a와 b를 선언합니다.
    scanf("%d %d", &a, &b); // 사용자로부터 두 개의 정수를 입력받습니다.

    ChangeNumber(&a, &b); // ChangeNumber 함수를 호출하여 a와 b의 값을 변경합니다.

    printf("%d %d", a, b); // 변경된 a와 b의 값을 출력합니다.
    
    return 0; // 프로그램을 종료합니다.
}