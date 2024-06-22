//키 몸무게는 내림차순, 번호는 오름차순이어야함 그니까 AB의 위치가 다름!!!!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생 구조체 정의
struct Student {
    int x;
    int y;
    int n;

};

// 멘하탄 거리를 계산하는 함수
int manhattanDistance(int x, int y) {
    return abs(x) + abs(y);
    //abs()는 절댓값
}

// 비교 함수: 국어 -> 영어순서로 내림차순 정렬
int compare(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;

    // 멘하탄 거리 계산
    int distA = manhattanDistance(studentA->x, studentA->y);
    int distB = manhattanDistance(studentB->x, studentB->y);

    // 멘하탄 거리 기준으로 오름차순 정렬
    if (distA != distB)
        return distA - distB;

    // 거리가 같으면 번호 기준으로 오름차순 정렬
    return studentA->n - studentB->n;
}

int main() {
    int n;
    scanf("%d", &n);

    // 동적 메모리 할당을 통해 n명의 학생을 저장할 구조체 배열 생성
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        return 1; // 메모리 할당 실패 시 종료
    }

    // 학생들의 정보 입력 받기
    for (int i = 0; i < n; i++) {
        scanf("%d %d",&students[i].x, &students[i].y);
        students[i].n = i + 1; 
    }

    // 정렬 함수 호출 (내림차순으로 정렬)
    qsort(students, n, sizeof(struct Student), compare);
    

    // 정렬된 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d\n", students[i].n);
    }

    // 동적으로 할당한 메모리 해제
    free(students);

    return 0;
}