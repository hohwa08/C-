//ch9lab4.c
#include <stdio.h>

int main()
{
    int h, m;

    printf("���� �ð��� �Է��ϼ���: ");
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

    printf("30������ %d : %d", h, m);
}
