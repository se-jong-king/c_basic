#include <stdio.h>

//1~10���� �ݺ��ϸ鼭 ¦���� ����ϴ� �ڵ� �ۼ�
// ¦�� �Ǻ� : 2�� ������ �������� 0�̸� ¦��
//if(0) -> false
//if(1) -> true

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}
