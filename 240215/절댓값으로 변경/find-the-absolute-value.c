#include <stdio.h>

void func(int *a, int b[]) {
    for(int i=0;i<*a;i++){
        if(b[i] < 0) {
            b[i] *= -1; 
        }
    }
    return;
}

int main() {
    int a;
    scanf("%d", &a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        
    }
    func(&a,b);

    for(int i = 0; i < a; i++) { 
        printf("%d ", b[i]);
    }
    
    return 0;
}