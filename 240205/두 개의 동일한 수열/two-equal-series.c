#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int n;
int a[MAX_N], b[MAX_N];

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int Equal(int arr1[], int arr2[]) {
    // n개의 원소를 순서대로 봤을 때
    // 전부 동일한 경우에만 일치합니다.
    // 단 하나라도 다르다면, 0을 반환합니다.
    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return 0;

    return 1;
}

int main() {
    // 입력
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    // 정렬
    qsort(a, n, sizeof(int), compare);
    qsort(b, n, sizeof(int), compare);

    // 수열이 일치하는지 확인합니다.
    if (Equal(a, b))
        printf("Yes");
    else
        printf("No");

    return 0;
}