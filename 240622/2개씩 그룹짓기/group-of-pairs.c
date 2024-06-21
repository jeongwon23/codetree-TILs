#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[2 * MAX_N];

    for(int i = 0; i < 2 * n; i++)
        scanf("%d", &nums[i]);

    // nums[0]부터 nums[2n - 1]까지를 정렬함
    qsort(nums, 2 * n, sizeof(int), compare);

    int group_max = 0;
    for(int i = 0; i < n; i++) {
        // i번째와 2n - 1 - i번째 원소를 매칭
        int group_sum = nums[i] + nums[2 * n - 1 - i];
        if(group_sum > group_max)
            // 최댓값 갱신
            group_max = group_sum;
    }

    printf("%d\n", group_max);

    return 0;
}