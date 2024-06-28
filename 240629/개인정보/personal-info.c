#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct {
    char name[11];
    int height;
    float weight;
} Person;

void sortName(Person persons[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(persons[j].name, persons[j + 1].name) > 0) {
                Person temp = persons[j];
                persons[j] = persons[j + 1];
                persons[j + 1] = temp;
            }
        }
    }
}

void sortHeight(Person persons[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (persons[j].height < persons[j + 1].height) {
                Person temp = persons[j];
                persons[j] = persons[j + 1];
                persons[j + 1] = temp;
            }
        }
    }
}

int main() {
    Person persons[SIZE] = { 0 };

    for (int i = 0; i < SIZE; i++) {
        scanf("%s %d %f", persons[i].name, &persons[i].height, &persons[i].weight);
    }

    sortName(persons, SIZE);

    printf("name\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s %d %.1f\n", persons[i].name, persons[i].height, persons[i].weight);
    }

    sortHeight(persons, SIZE);

    printf("\nheight\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s %d %.1f\n", persons[i].name, persons[i].height, persons[i].weight);
    }

    return 0;
}