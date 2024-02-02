#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// qsort 함수에서 사용되는 비교 함수로, 정렬 과정 중에 원소들의 순서를 결정
int func(const void *a, const void *b) {
    char *x = (char *)a;
    char *y = (char *)b;
    return *x - *y;
}
/*
함수는 두 개의 매개변수 a와 b를 받습니다. 이는 비교되는 원소들을 가리키는 포인터들입니다. 여기서는 문자열 내의 문자를 가리키는 포인터들입니다.

매개변수 a와 b는 qsort 함수가 배열의 원소들을 가리키는 포인터를 기대하기 때문에 char *로 캐스트됩니다.

함수 내부에서 *x와 *y는 포인터를 역참조하여 해당 포인터가 가리키는 문자를 얻습니다.

표현식 *x - *y은 x가 가리키는 문자와 y가 가리키는 문자의 ASCII 값 차이를 계산합니다.

결과가 음수인 경우, x가 가리키는 문자가 y가 가리키는 문자보다 앞에 위치해야 함을 의미합니다.
결과가 양수인 경우, y가 가리키는 문자가 x가 가리키는 문자보다 앞에 위치해야 함을 의미합니다.
결과가 0인 경우, 문자들은 정렬 순서상 동등하다고 간주됩니다.
*/

int main() {
    // 문자열을 저장할 배열 선언 (최대 100글자)
    char str[101];

    // 사용자로부터 문자열 입력 받기
    scanf("%s", str);

    // 문자열을 가리키는 포인터 설정
    char *arr = str;

    // qsort 함수를 사용하여 문자열 정렬
    qsort(arr, strlen(str), sizeof(char), func);

    // 정렬된 문자열 출력
    printf("%s\n", str);

    return 0;
}