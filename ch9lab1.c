//ch9lab1.c
#include <stdio.h>

int main()
{
    int n1, n2;

    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &n1, &n2);

    if (n1>n2)
    {
        printf("%d이 더 큽니다.", n1);
    }
    else if(n1<n2)
    {
        printf("%d이 더 큽니다.", n2);
    }
    return 0;
}
