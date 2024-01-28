#include <stdio.h>

// 재귀 함수를 사용하여 배열의 최댓값을 찾는 함수
int findMax(int arr[], int n) {
    // 기저 사례: 배열에 한 개의 원소만 있는 경우 그 원소가 최댓값
    if (n == 1) {
        return arr[0];
    }

    // 나머지 경우에는 현재 원소와 나머지 부분 배열의 최댓값 비교
    int restMax = findMax(arr + 1, n - 1);
    
    // 현재 원소와 나머지 부분 배열의 최댓값 중 큰 값을 반환
    return (arr[0] > restMax) ? arr[0] : restMax;
}

int main() {
    int n;

    // 사용자로부터 정수 n 입력 받기
    scanf("%d", &n);

    // n개의 정수 입력 받기
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열에서 최댓값 찾기
    int max = findMax(arr, n);

    // 최댓값 출력
    printf("%d", max);

    return 0;
}