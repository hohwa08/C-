//ch8ex1.c
//���տ�����

#include <stdio.h>

int main()
{
    int cnt = 0;

    cnt = cnt + 1;
    printf("cnt: %d\n", cnt);
    printf("cnt: %d\n", cnt+ 1);
    printf("cnt: %d\n", cnt);
    printf("cnt: %d\n", cnt+=1);
    printf("cnt: %d\n", cnt);

    cnt += 2;
    printf("cnt: %d\n", cnt);

    cnt -= 1;
    printf("cnt: %d\n", cnt);


    return 0;
}
