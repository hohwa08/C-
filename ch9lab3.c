//ch9lab3.c
#include <stdio.h>

int main()
{
    int t;

    printf("현재 시각을 입력하세요: ");
    scanf("%d", &t);

    if(t < 10)
    {
        printf("Good Morning");
    }
    else if(t < 20)
    {
        printf("Good Morning");
    }
    else
    {
        printf("Good Evening");
    }
    return 0;
}
