#include <stdio.h>
#include<string.h>

int func(char *arr){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    char c[100];
    scanf("%s",&c);
    if(func(c)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}