//ch6lab2.c
//�ǽ�����

#include <stdio.h>

int main()
{
    float to_temp, ye_temp;

    printf("���� ������ �����? ");
    scanf("%f", &to_temp);
    printf("���� ������ �������?");
    scanf("%f", &ye_temp);
    printf("������ %.1f�� ����, ������ %.1f������", to_temp, ye_temp);

    return 0;
}
