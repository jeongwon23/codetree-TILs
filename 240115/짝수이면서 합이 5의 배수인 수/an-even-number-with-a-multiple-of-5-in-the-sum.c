#include <stdio.h>

void Add(int n){
    if(n%2!=0){
        printf("No");
    }
    else{
        if((n/10+n%10)%5==0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    Add(n);
    return 0;
}