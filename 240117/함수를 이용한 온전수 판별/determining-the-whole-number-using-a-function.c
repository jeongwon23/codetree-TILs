#include <stdio.h>

void Perfect(int num){
    if (num % 2 == 0) {
        return 0;
    }

    if (num % 10 == 5) {
        return 0;
    }

    if (num % 3 == 0 && num % 9 != 0) {
        return 0;
    }

    return 1;
}

void func(int a,int b){
    for(int i=a;i<=b;i++){
        if(Perfect(i)){
            count++;
        }
    }return count;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    Perfect(a,b);
    return 0;
}