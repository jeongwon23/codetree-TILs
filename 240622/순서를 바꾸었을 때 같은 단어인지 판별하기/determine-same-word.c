#include <stdio.h>
#include <string.h>

// 함수: 두 단어가 애너그램인지 확인
int areAnagrams(char *str1, char *str2) {
    int count1[256] = {0}; // ASCII 문자 빈도수
    int count2[256] = {0}; // ASCII 문자 빈도수

    // 첫 번째 단어의 문자 빈도수 세기
    for (int i = 0; str1[i] && str2[i]; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    // 두 문자열의 길이가 다른 경우
    if (strlen(str1) != strlen(str2))
        return 0;

    // 두 단어의 문자 빈도수 비교
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[100];
    char str2[100];

    scanf("%s\n", str1);

    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}