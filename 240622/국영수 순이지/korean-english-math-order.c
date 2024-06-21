#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생 구조체 정의
struct Student {
    char name[50];
    int korean;
    int english;
    int math;
};

// 비교 함수: 국어 -> 영어 -> 수학 순서로 내림차순 정렬
int compare(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;

    // 먼저 국어 점수로 비교
    if (studentA->korean != studentB->korean)
        return studentB->korean - studentA->korean;

    // 국어 점수가 같으면 영어 점수로 비교
    if (studentA->english != studentB->english)
        return studentB->english - studentA->english;

    // 영어 점수도 같으면 수학 점수로 비교
    return studentB->math - studentA->math;
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
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }

    // 정렬 함수 호출 (내림차순으로 정렬)
    qsort(students, n, sizeof(struct Student), compare);

    // 정렬된 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", students[i].name, students[i].korean, students[i].english, students[i].math);
    }

    // 동적으로 할당한 메모리 해제
    free(students);

    return 0;
}