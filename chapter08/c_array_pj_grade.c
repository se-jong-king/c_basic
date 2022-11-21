#include <stdio.h>

//배열은 값을 여러개 담음 -> 전체출력 -> 반복문(for)

int main(void)
{
    int score[5];
    int total = 0;
    double avg;

    for (int i = 0; i < 5; i++) // index : 0~4
    {
        printf("%d: ", i+1);
        scanf("%d", &score[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        total += score[i];
    }
    avg = total / 5.0;
    printf("평균 점수: %.1lf", avg);
}

