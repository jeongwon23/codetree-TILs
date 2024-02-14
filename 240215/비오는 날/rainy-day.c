#include <stdio.h>
#include <string.h>

typedef struct { 
    char date[11];
    char day[10];
    char weather[10];
} Forecast;

int main() {
    int n;
    scanf("%d", &n);

    Forecast forecasts[n];
    for(int i = 0; i < n; i++) { 
        scanf("%s %s %s", forecasts[i].date, forecasts[i].day, forecasts[i].weather);
    }

    for(int i = 0; i < n; i++) { 
        if(strcmp(forecasts[i].weather, "Rain") == 0) { 
            printf("%s %s %s\n", forecasts[i].date, forecasts[i].day, forecasts[i].weather); // 그 정보를 출력하고
            break;
        }
    }

    return 0;
}
/*C 언어에서 문자열은 문자의 배열로 표현되며, 
문자열 자체를 직접 비교하는 것은 불가능합니다. 
즉, if(forecasts[i].weather == "Rain")와 같은 코드는 작동하지 않습니다. 
이는 "Rain"이라는 문자열과 forecasts[i].weather가 가리키는 
메모리 위치를 비교하게 되기 때문입니다.

그러나 우리가 원하는 것은 두 문자열의 내용이 같은지 비교하는 것이므로, 
strcmp 함수를 사용해 두 문자열의 내용을 비교합니다. 
strcmp 함수는 두 문자열의 내용이 같을 경우 0을 반환하므로, 
if(strcmp(forecasts[i].weather, "Rain") == 0)와 같은 코드를 사용하면 
forecasts[i].weather가 "Rain"인지를 정확히 판별할 수 있습니다. */