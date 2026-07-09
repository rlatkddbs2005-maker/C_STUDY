#include <stdio.h>
int main()
{
    int num1, num2;
    printf("num1을 입력하세요");
    scanf("%d", &num1);
    printf("num2를 입력하세요");
    scanf("%d", &num2);
    int sum = num1 + num2;
    if (num1 == 2 * num2 || num2 == 2 * num1)
    {
        printf("%d", sum);
    } 
    else
    {
        printf("조건이 충족하지 않습니다.");
    }
    return 0;
}