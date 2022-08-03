//ch6lab1.c
//실습문제

#include <stdio.h>

int main()
{
    char lang;
    int level;

    printf("배우는 언어는? ");
    scanf("%c", &lang);

    printf("느끼는 난이도는(1~10사이의 정수)? ");
    scanf("%d", &level);

    printf("당신은 %c를 배우면서 %d정도 어렵다고 느끼시는군요!", lang, level);
    return 0;
}
