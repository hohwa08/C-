//ch9ex3.c
//성적을 학점으로 출력하기

#include <stdio.h>

int main()
{
    int score;

    printf("평균 성적은? ");
    scanf("%d", &score);

    if(score  >= 90)
    {
        printf("A학점입니다.\n");

    }
    else if(score >= 80)
    {
        printf("B학점입니다.");
    }
    else if(score >= 70)
    {
        printf("C학점입니다.");
    }
    else if(score >= 60)
    {
        printf("D학점입니다.");
    }
    else
    {
        printf("F학점입니다.");
    }

    return 0;
}
