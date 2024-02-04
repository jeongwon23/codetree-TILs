#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char code[10];
    char *color;
    int second;
} Person;

int main() {
    Person p1;

    // 동적 메모리 할당을 통해 color에 필요한 크기만큼의 공간을 할당받음
    p1.color = (char *)malloc(20 * sizeof(char)); // 예시로 최대 20글자로 가정

    scanf("%s %s %d", p1.code, p1.color, &p1.second);

    printf("code : %s\n", p1.code);
    printf("color : %s\n", p1.color);
    printf("second : %d\n", p1.second);

    // 할당 받은 동적 메모리 해제
    free(p1.color);

    return 0;
}