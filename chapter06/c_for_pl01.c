#include<stdio.h>

//1~10�� ���� ���� ���
int main(void)
{
    int sum = 0;  //���� ����
    
    

    // for�� Ȱ���Ͽ� �ۼ��Ͻÿ�.

    for (int i = 1; i <= 10; i++) {
        sum = sum + i; //or sum += i
    }
    printf("���� ����: %d\n", sum);
}
