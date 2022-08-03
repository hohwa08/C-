//ch10lab2.c

#include <stdio.h>

int main()
{
    int num = 15;
    char ch = 'p';

    if (num >= 10 && num < 30)
    {
        printf("%d는 10보다 크거나 같고 30보다 작다.\n", num);
    }
    if(num % 3 == 0 || num % 5 == 0)
    {
        printf("%d는 3또는 5의 배수이다.\n", num);
    }
    if ((ch >= 'a'&& ch<= 'z') || (ch >= 'A'&& ch <= 'Z'))
    {
        printf("%c는 대문자 또는 소문자이다.\n", ch);
    }
    if (!(ch >= '0' && ch <= '9'))
    {
        printf("%c는 문자 숫자가 아니다.\n", ch);
    }

    return 0;
}
