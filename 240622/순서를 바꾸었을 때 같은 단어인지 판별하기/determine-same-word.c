#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 비교 함수
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char str1[100];
    char str2[100];

    scanf("%s %s", str1, str2);

    // 각 문자열을 정렬합니다.
    qsort(str1, strlen(str1), sizeof(char), compare);
    qsort(str2, strlen(str2), sizeof(char), compare);

    // 정렬된 문자열 비교
    if(strcmp(str1, str2) == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}