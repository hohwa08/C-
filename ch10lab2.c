//ch10lab2.c

#include <stdio.h>

int main()
{
    int num = 15;
    char ch = 'p';

    if (num >= 10 && num < 30)
    {
        printf("%d�� 10���� ũ�ų� ���� 30���� �۴�.\n", num);
    }
    if(num % 3 == 0 || num % 5 == 0)
    {
        printf("%d�� 3�Ǵ� 5�� ����̴�.\n", num);
    }
    if ((ch >= 'a'&& ch<= 'z') || (ch >= 'A'&& ch <= 'Z'))
    {
        printf("%c�� �빮�� �Ǵ� �ҹ����̴�.\n", ch);
    }
    if (!(ch >= '0' && ch <= '9'))
    {
        printf("%c�� ���� ���ڰ� �ƴϴ�.\n", ch);
    }

    return 0;
}
