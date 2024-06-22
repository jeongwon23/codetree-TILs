#include <stdio.h>

int main() {
    int month, day;
    int elapsed_days = 0;
    int m1,m2,d1,d2;

    scanf("%d %d %d %d",&m1,&d1,&m2,&d2);

    month = m1;
    day = d1;
    
    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while(1) { // C 언어에서는 true 대신 1을 사용
        if(month == m2 && day == d2)
            break;
    
        elapsed_days++;
        day++;
    
        if(day > num_of_days[month]) {
            month++;
            day = 1;
        }
    }
    
    printf("%d\n", elapsed_days+1);
    
    return 0;
}