#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int nums[MAX_N];

// 오름차순 비교 함수
int compareAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 내림차순 비교 함수
int compareDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    // 변수 선언
    int n;

    // 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // 오름차순 정렬
    qsort(nums, n, sizeof(int), compareAsc);

    // 정렬된 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    printf("\n");

    // 내림차순 정렬
    qsort(nums, n, sizeof(int), compareDesc);

    // 정렬된 결과 출력
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    printf("\n");

    return 0;
}