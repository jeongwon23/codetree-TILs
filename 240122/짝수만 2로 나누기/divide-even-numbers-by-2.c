#include <stdio.h>

void func(int *x,int n){
    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            x[i]/=2;
        }printf("%d ",x[i]);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    func(arr,n);
    return 0;
}