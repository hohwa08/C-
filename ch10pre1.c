//ch10pre1.c
//���� �Ǻ�

#include <stdio.h>

int main()
{
    int age;
    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &age);
    if (age >= 21 && age <= 60)
    {
        printf("����û���̽ñ���!");
    }
    if(age <= 10 || age>= 70)
    {
        printf("�����");
    }
    return 0;
}
