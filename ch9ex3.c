//ch9ex3.c
//������ �������� ����ϱ�

#include <stdio.h>

int main()
{
    int score;

    printf("��� ������? ");
    scanf("%d", &score);

    if(score  >= 90)
    {
        printf("A�����Դϴ�.\n");

    }
    else if(score >= 80)
    {
        printf("B�����Դϴ�.");
    }
    else if(score >= 70)
    {
        printf("C�����Դϴ�.");
    }
    else if(score >= 60)
    {
        printf("D�����Դϴ�.");
    }
    else
    {
        printf("F�����Դϴ�.");
    }

    return 0;
}
