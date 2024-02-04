#include <stdio.h>

typedef struct {
    int length;
    char id[10];    
} Person;

int main() {
    Person p1 = {50, "codetree"};
    printf("product %d is %s\n", p1.length, p1.id);

    scanf("%s %d", p1.id, &p1.length);

    printf("product %d is %s", p1.length, p1.id);

    return 0;
}