//ch9lab2.c
#include <stdio.h>

int main()
{
    int n;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d�� ¦���Դϴ�.", n);
    }
    else
    {
        printf("%d�� Ȧ���Դϴ�.", n);

    }
    return 0;
}
