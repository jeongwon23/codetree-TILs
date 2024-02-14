#include <stdio.h> // 표준 입출력 라이브러리를 포함합니다.

#define MAX_N 100 // 수열의 최대 길이를 정의합니다.

int n1, n2; // n1과 n2는 각각 a와 b 수열의 길이를 나타냅니다.
int a[MAX_N], b[MAX_N]; // a와 b는 각각 수열 a와 b를 저장하는 배열입니다.

// n번째 인덱스부터 시작하는 n2길이의 a수열과
// b수열이 완전히 일치하는지 확인합니다.
int IsSame(int n) { // n은 시작 인덱스를 나타냅니다.
    for(int i = 0; i < n2; i++) // b 수열의 모든 원소에 대해 반복합니다.
        if(a[i + n] != b[i]) // a 수열의 해당 인덱스의 원소와 b 수열의 원소가 다르면
            return 0; // 0을 반환합니다.

    return 1; // 모든 원소가 일치하면 1을 반환합니다.
}

// b가 a의 연속부분수열인지 확인합니다.
int IsSubsequence() {
    for(int i = 0; i <= n1 - n2; i++) // a 수열의 가능한 모든 시작 인덱스에 대해 반복합니다.
        if(IsSame(i)) // 해당 인덱스에서 시작하는 부분수열이 b 수열과 일치하면
            return 1; // 1을 반환합니다.
    
    return 0; // b 수열과 일치하는 부분수열이 없으면 0을 반환합니다.
}

int main() { // 메인 함수입니다.
    // 변수 선언 및 입력:
    scanf("%d %d", &n1, &n2); // a와 b 수열의 길이를 입력받습니다.

    for(int i = 0; i < n1; i++) // a 수열의 원소를 입력받습니다.
        scanf("%d", &a[i]);
    
    for(int i = 0; i < n2; i++) // b 수열의 원소를 입력받습니다.
        scanf("%d", &b[i]);

    // b 수열이 a 수열의 부분수열인지 확인하고, 그 결과를 출력합니다.
    if(IsSubsequence())
        printf("Yes");
    else
        printf("No");

    return 0; // 프로그램을 종료합니다.
}