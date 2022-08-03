//ch9lab2.c
#include <stdio.h>

int main()
{
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d은 짝수입니다.", n);
    }
    else
    {
        printf("%d은 홀수입니다.", n);

    }
    return 0;
}
