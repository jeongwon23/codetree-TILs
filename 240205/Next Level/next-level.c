#include <stdio.h>

typedef struct {
    char id[10];
    int level;
} Person;

int main() {
    Person p1 = {"codetree", 10};
    printf("user %s lv %d\n", p1.id, p1.level);

    scanf("%s %d", p1.id, &p1.level);

    printf("user %s lv %d", p1.id, p1.level);

    return 0;
}