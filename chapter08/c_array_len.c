#include <stdio.h>

//�迭�� ���� ������ ���� -> ��ü��� -> �ݺ���(for)

int main(void)
{
    int score[5];
    int total = 0;
    double avg;
    // �迭 ����(len, size, length) ���
    // sizeof() -> ()���� ���� �޸� ũ��(Byte ����)
    // int -> 4 Byte
    // score -> 20 Byte, score[0] -> 4 Byte
    // 20 / 4 = 5 -> �迭�� ���� �Ǵ� ����

    int array_count = sizeof(score) / sizeof(score[0]);
    for (int i = 0; i < 5; i++) // index : 0~4
    {
        printf("%d: ", i+1);
        scanf("%d", &score[i]);
    }
    
    for (int i = 0; i < array_count; i++)
    {
        total += score[i];
    }
    avg = total / 5.0;
    printf("��� ����: %.1lf", avg);
}
