#include <stdio.h>

/**
 *  ����Լ�
 * 
 * 
 * 
*/
void fruit(void);

int main(void)
{
    fruit();
}
//���� �ݺ� ȣ���ϴ� ����Լ�
// - ���� ��� ����!
// - Fatal Error;

void fruit(void) {
    printf("apple\n");
    fruit();
}