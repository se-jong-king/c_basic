#include<stdio.h>

/**
 *  
 *  int main(){
 *     printf("d%", sum(5, 10));
 *  }   
 *      ��            (return)
 *      ��               ��
 *      ��               ��
 *  (parameters)        ��
 *   int sum(int x, int y) {
 *   return x + y;
 * }
 * 
*/

// �Լ� -> 
// �Լ� -> X, return
int get_num(void); // ����

int main(void) //ȣ��
{
    printf("��: %d", get_num());
}
// main()�Լ� ���� �Լ��� ����Ǹ�, �Լ����� ������ �ʿ� ����
// void : �ش� ���� ������� ���� ���
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);  //���� 
    return num;
}