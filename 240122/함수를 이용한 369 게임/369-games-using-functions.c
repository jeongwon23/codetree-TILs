#include <stdio.h>

int func(int i){
    int temp=i;
    while(temp>0){
    if(temp%10==3||temp%10==6||temp%10==9){
        return 1;
    }
    temp/=10;
    }
    if(i%3==0){
        return 1;
    }
    return 0;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(func(i))
            count++;
    }
    printf("%d",count);
    return 0;
}