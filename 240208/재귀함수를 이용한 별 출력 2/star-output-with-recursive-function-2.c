#include <stdio.h>

int func(int n){
    if (n == 0) {
        return 0;
    } 
    for(int i=1;i<=n;i++){
        printf("* ");
       
    } printf("\n");

    func(n - 1);
    
    for(int i=1;i<=n;i++){
        printf("* ");
       
    } printf("\n");
        
    
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}