#include <stdio.h>

typedef struct {
    char code[10];
    char place[5];
    int time;
} Person;

int main() {
    // 여기에 코드를 작성해주세요.
    Person p1;
    scanf("%s %s %d", p1.code, p1.place, &p1.time);

    printf("secret code : %s\n", p1.code);
    printf("meeting point : %s\n", p1.place);
    printf("time : %d\n", p1.time);

    return 0;
}