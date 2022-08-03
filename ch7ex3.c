//ch7ex3.c
//4과목 평균 구하기

#include <stdio.h>

int main()
{
    int kor, eng, mat, sci;
    int sum;
    float avg;

    printf("국어, 영어, 수학, 과학 점수를 입력하세요: ");
    scanf("%d %d %d %d", &kor, &eng, &mat, &sci);

    sum = kor + eng + mat + sci;
    avg = sum / 4.0;

    prinf("4과목의 총점은 %d, 평균은 %.1f점입니다.\n", sum, avg);

    return 0;
}
