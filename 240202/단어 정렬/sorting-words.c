#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 100 // 배열 크기 설정

// 비교 함수
int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    // 변수 선언
    int n;
    char word_list[MAX_N][101]; // 각 단어의 최대 길이를 100으로 가정

    // 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", word_list[i]);
    }

    // 문자열 사전순 정렬
    qsort(word_list, n, sizeof(word_list[0]), compareStrings);

    // 정렬된 문자열 출력
    for (int i = 0; i < n; i++) {
        printf("%s\n", word_list[i]);
    }

    return 0;
}