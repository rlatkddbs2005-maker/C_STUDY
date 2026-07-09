#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("num1을 입력해주세요");
    scanf("%d", &num1);
    printf("num2을 입력해주세요");
    scanf("%d", &num2);
    printf("num3을 입력해주세요");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("num1이 가장큰 수입니다.");
    }
    else 
    {
        printf("num1이 가장큰 수가 아닙니다.");
    }
    return 0;
}