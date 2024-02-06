#include <stdio.h>
#include <string.h>

#define MAXN 10

// Person 정보를 나타내는 구조체 선언
typedef struct {
    char name[100];
    char street_address[100];
    char region[100];
} Person;

Person people[MAXN];

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char name[100], address[100], region[100];
        scanf("%s %s %s", name, address, region);
        
        // 구조체 초기화
        strcpy(people[i].name, name);
        strcpy(people[i].street_address, address);
        strcpy(people[i].region, region);
    }
    
    // 사전순으로 이름이 가장 느린 사람 찾기
    int last_idx = 0;
    for (int i = 1; i < n; i++) {
        if (strcmp(people[i].name, people[last_idx].name) > 0)
            last_idx = i;
    }

    // 결과를 출력합니다.
    printf("name %s\n", people[last_idx].name);
    printf("addr %s\n", people[last_idx].street_address);
    printf("city %s\n", people[last_idx].region);
    
    return 0;
}