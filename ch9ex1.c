//ch9ex1.c
//���� ���

#include <stdio.h>
#define CURRENT_YEAR 2022

int main()
{
    int year, age;

    printf("��⵵�� �¾���ϱ�? ");
    scanf("%d", &year);
    if(year > CURRENT_YEAR)
    {
        printf("�߸��� �Է��Դϴ�.\n");
    }

    else
    {
        age = CURRENT_YEAR- year + 1;
        printf("���� %d���̱���!\n", age);
        if (year % 400 == 0)
        {
            printf("��! ���⿡ �¾����!");
        }
    }
        //����⵵�� 400���� �������� 0�� ��� '��! ���⿡ �¾����!'�޽��� ���

        return 0;


}
