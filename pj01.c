#include<stdio.h>

/**
 *  ���� : 5�ڸ�
 *  �� : 57256
 * 
 * 
 *  ���� 1 : ���ڸ� ����ڿ��� �Է�(scanf), �ڸ��� ���� ����
 *  ���� 2 : �ڸ��� ���� ���� ��Ȳ������ �Ȱ��� ���� !
*/

int main(void) {
    int num = 57256;
    int total = 0;

    //�ڵ�
    // 5*10000 + 7*1000 + 2*100 + 5*10 + 6 = 57256

    for (int i = 1; i <= 5; i++) //5�� �ݺ�
    {
        total += (num % 10); //����
        num = num / 10; //���� ����(- 1�ڸ�)
    }

    // 5 + 7 + 2 + 5 + 6 = 25
    printf("���� %d\n", total); //25���
}