#include <stdio.h>
int main()
{
    int score;
    printf("점수를 입력하세요: ");
    scanf('%d', &score);
    if (score >= 70)
    {
        printf("당신의 시험점수는 %d점 입니다. \n 축하합니다! 합격입니다.", score);
    }
    else
    {
        printf("당신의 시험점수는 %d점 입니다. \n 수고하셨습니다. 불합격입니다." ,score);
    }
return 0;
}