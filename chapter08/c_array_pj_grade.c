#include <stdio.h>

//�迭�� ���� ������ ���� -> ��ü��� -> �ݺ���(for)

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
    printf("��� ����: %.1lf", avg);
}

