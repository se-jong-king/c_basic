#include<stdio.h>

    /**
     * ����
     * 1. ��1�� ��2���� ū ��� ���
     * 2. ��1�� ��2���� ���� ��� ���
     * 3. ��1�� ��2�� ���� ���
     * �����ǹ�! ��������
    */

    
int main(void)
{
    int num1, num2;
    printf("ù��° ��: ");
    scanf("%d", &num1);
    printf("�ι�° ��: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("ù��° ��(%d)�� �ι�° ��(%d)���� Ů�ϴ�.", num1, num2);
    } else if (num1 < num2) {
        printf("ù��° ��(%d)�� �ι�° ��(%d)���� �۽��ϴ�.", num1, num2);
    } else { 
        printf("ù��° ��(%d)�� �ι�° ��(%d)�� �����ϴ�.", num1, num2);
    }

}
