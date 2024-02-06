#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 20
#define NUM_AGENTS 5

typedef struct {
    char name[MAX_NAME_LENGTH];
    int score;
} Agent;

int main() {
    Agent agents[NUM_AGENTS];
    int i;
    
    // 5명의 코드네임과 점수를 입력받음
    for (i = 0; i < NUM_AGENTS; i++) {
        scanf("%s %d", agents[i].name, &agents[i].score);
    }
    
    // 점수가 제일 낮은 요원의 정보를 찾음
    int minScore = agents[0].score;
    int minIndex = 0;
    for (i = 1; i < NUM_AGENTS; i++) {
        if (agents[i].score < minScore) {
            minScore = agents[i].score;
            minIndex = i;
        }
    }
    
    // 점수가 제일 낮은 요원의 정보를 출력
    printf("%s %d\n", agents[minIndex].name, agents[minIndex].score);
    
    return 0;
}