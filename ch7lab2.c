//ch7lab2.c
//�ǽ�����

#include <stdio.h>

int main()
{
    int n1, n2, n3, q;

    printf("���� 3���� �Է��ϼ���: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    q = (n1 + n2) * n3;
    printf("(%d + %d) * %d = %d�Դϴ�.", n1, n2, n3, q);

    return 0;

}
