#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d\n", *a, *b);
}

int main() {
    int n,m;
    scanf("%d %d",&n, &m);
    swap(&n, &m);
    return 0;
}