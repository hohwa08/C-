//ch7ex2.c
//³ª´°¼À ¿¬»ê

#include <stdio.h>

int main()
{
    int a = 10, b = 3, i_res;
    float x = 10.0, y = 3.0, f_res;
    int n1 = 10, n2 = 20, n3 = 5;
    int sum;
    float avg;

    sum = n1 + n2 + n3;
    avg = sum / 3.0;
    printf("sum: %d, avg: %.1f\n", sum, avg);

    f_res = x /y;
    printf("f_res: %.1f\n", f_res);

    i_res = a / b;
    printf("i_res: %d\n", i_res);

    f_res = a / b;
    printf("f_res: %.1f\n", f_res);

    f_res = x / b;
    printf("f_res: %.1f\n", f_res);

    return 0;
}
