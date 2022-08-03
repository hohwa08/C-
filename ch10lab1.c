//ch10lab1.c

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Á¤¼ö 2°³¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf("%d %d", &n1, &n2);

    if (n1%2 == 0 && n2%2 == 0)
    {
        printf("Â¦¼ö");
    }
    else if (n1%2 == 1 && n2%2 == 1)
    {
        printf("È¦¼ö");
    }
    else
    {
        printf("È¦Â¦");
    }


    return 0;
}
