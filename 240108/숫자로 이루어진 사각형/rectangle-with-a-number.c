#include <stdio.h>

void num(int n){
    int value=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           /* if (value > 9) {
                value -= 9;
            }*/
            value = value % 9 + 1;
            printf("%d ",value);
        }printf("\n");
    }
}
int main() {
    int a;
    scanf("%d",&a);
    num(a);
    return 0;
}