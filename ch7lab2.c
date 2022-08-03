//ch7lab2.c
//실습문제

#include <stdio.h>

int main()
{
    int n1, n2, n3, q;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    q = (n1 + n2) * n3;
    printf("(%d + %d) * %d = %d입니다.", n1, n2, n3, q);

    return 0;

}
