//ch7ex3.c
//4���� ��� ���ϱ�

#include <stdio.h>

int main()
{
    int kor, eng, mat, sci;
    int sum;
    float avg;

    printf("����, ����, ����, ���� ������ �Է��ϼ���: ");
    scanf("%d %d %d %d", &kor, &eng, &mat, &sci);

    sum = kor + eng + mat + sci;
    avg = sum / 4.0;

    prinf("4������ ������ %d, ����� %.1f���Դϴ�.\n", sum, avg);

    return 0;
}
