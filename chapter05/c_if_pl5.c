#include <stdio.h>

int main(void)
{
    int num1 = 20, num2 = 10, num3 = 50;
    int temp;
    //���� 3���� ���� �ٸ� ���� ����
    // - ���� : num1 �� num2�� ���� �ٲ�(ü����)

    // �ڵ� ---
        // ü���� �ڵ� �ۼ�
    
    // ������ ���� ���� ��ȯ�ϴ� ��� : �ӽù�(temp)�� ���� �� ��ȯ
    
    // ���� : num1 > num2 > num3
    // num1 < num2 - �� ��ȯ : num1 > num2
    // num1 < num3 - �� ��ȯ : num1 > num2, num3
    // num2 < num3 - �� ��ȯ : num2 > num3
    // -> num1 > num2 > num3
    if(num1 < num2) { 
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d > %d > %d", num1, num2, num3);
}