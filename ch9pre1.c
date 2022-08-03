//ch9pre1.c
//관계연산과 if
#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);
    if(score >= 80)
    {
        printf("합격입니다.");
    }
    else
    {
        printf("불합격입니다.");
    }
    return 0;
}
