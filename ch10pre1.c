//ch10pre1.c
//나이 판별

#include <stdio.h>

int main()
{
    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    if (age >= 21 && age <= 60)
    {
        printf("이팔청춘이시군요!");
    }
    if(age <= 10 || age>= 70)
    {
        printf("노약자");
    }
    return 0;
}
