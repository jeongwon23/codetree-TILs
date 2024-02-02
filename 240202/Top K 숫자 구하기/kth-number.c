#include <stdio.h>

#define MAX_N 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n, k;
    int arr[MAX_N];

    // 입력
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 버블 정렬을 사용하여 오름차순으로 정렬
    bubbleSort(arr, n);

    // 정렬된 배열 출력
    printf("%d\n", arr[k-1]); // k번째 숫자를 출력

    return 0;
}