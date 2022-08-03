//ch6lab2.c
//실습문제

#include <stdio.h>

int main()
{
    float to_temp, ye_temp;

    printf("오늘 날씨는 몇도예요? ");
    scanf("%f", &to_temp);
    printf("어제 날씨는 몇도였나요?");
    scanf("%f", &ye_temp);
    printf("어제는 %.1f도 였고, 오늘은 %.1f도군요", to_temp, ye_temp);

    return 0;
}
