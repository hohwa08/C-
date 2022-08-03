//ch9ex1.c
//나이 계산

#include <stdio.h>
#define CURRENT_YEAR 2022

int main()
{
    int year, age;

    printf("몇년도에 태어났습니까? ");
    scanf("%d", &year);
    if(year > CURRENT_YEAR)
    {
        printf("잘못된 입력입니다.\n");
    }

    else
    {
        age = CURRENT_YEAR- year + 1;
        printf("현재 %d살이군요!\n", age);
        if (year % 400 == 0)
        {
            printf("오! 윤년에 태어났군요!");
        }
    }
        //출생년도를 400나눈 나머지가 0일 경우 '오! 윤년에 태어났군요!'메시지 출력

        return 0;


}
