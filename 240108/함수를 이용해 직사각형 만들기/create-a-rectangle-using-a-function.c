#include <stdio.h>

void PrintRect(int n,int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("1");
        }printf("\n");
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    PrintRect(a,b);
    return 0;
}