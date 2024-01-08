#include <stdio.h>

void Print10Stars(){
    for(int i=1;i<=10;i++){
        printf("*");
    }printf("\n");
}
int main() {
    for(int j=1;j<=5;j++){
       Print10Stars(); 
    }
    return 0;
}