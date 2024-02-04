#include <stdio.h>

typedef struct {
    char code[10];
    char color[2];
    int second;
} Person;

int main() {
    // 여기에 코드를 작성해주세요.
    Person p1;
    scanf("%s %s %d", p1.code, p1.color, &p1.second);

    printf("code : %s\n", p1.code);
    printf("color : %s\n", p1.color);
    printf("second : %d\n", p1.second);

    return 0;
}