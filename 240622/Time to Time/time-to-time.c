#include <stdio.h>
#include <stdbool.h>

int main() {
    int hours,mins;
    int a,b,c,d;
    int time=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    hours = a;
    mins = b;

    while(true){
        if(hours == c && mins == d)
            break;
        
        time++;
        mins++;

        if(mins == 60){
            hours++;
            mins = 0;
        }
    }

    printf("%d",time);
    return 0;
}