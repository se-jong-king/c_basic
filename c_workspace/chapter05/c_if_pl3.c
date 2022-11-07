#include<stdio.h>

    /**
     * 조건
     * 1. 수1이 수2보다 큰 경우 출력
     * 2. 수1이 수2보다 작은 경우 출력
     * 3. 수1이 수2와 같다 출력
     * →조건문! 만들어보세요
    */

    
int main(void)
{
    int num1, num2;
    printf("첫번째 수: ");
    scanf("%d", &num1);
    printf("두번째 수: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("첫번째 수(%d)가 두번째 수(%d)보다 큽니다.", num1, num2);
    } else if (num1 < num2) {
        printf("첫번째 수(%d)가 두번째 수(%d)보다 작습니다.", num1, num2);
    } else { 
        printf("첫번째 수(%d)와 두번째 수(%d)가 같습니다.", num1, num2);
    }

}
