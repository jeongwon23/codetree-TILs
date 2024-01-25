#include <stdio.h>

int cal(int A[], int n, int m) {
    while (m > 1) {
        if (m % 2 == 1) { 
            m -= 1;
        } else {
            m /= 2;
        }
    }
    return A[m - 1];
}

int main() {
    int n, m;
    int A[n];

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    
    scanf("%d", &m);

    int result = cal(A, n, m);
    printf("%d",result);

    return 0;
}