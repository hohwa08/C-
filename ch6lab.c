//ch6lab1.c
//�ǽ�����

#include <stdio.h>

int main()
{
    char lang;
    int level;

    printf("���� ����? ");
    scanf("%c", &lang);

    printf("������ ���̵���(1~10������ ����)? ");
    scanf("%d", &level);

    printf("����� %c�� ���鼭 %d���� ��ƴٰ� �����ô±���!", lang, level);
    return 0;
}
