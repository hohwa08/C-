//ch9lab4.c
#include <stdio.h>

int main()
{
    int h, m;

    printf("현재 시각을 입력하세요: ");
    scanf("%d : %d", &h, &m);
    if (h == 1)
    {
        h = 13;
    }
    if (m<30)
    {
        h -= 1;
        m += 60;
    }
    m -= 30;

    printf("30분전은 %d : %d", h, m);
}
