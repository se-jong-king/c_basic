#include <stdio.h>

/**
 *    scanf() 함수 : 
 *       + 키보드로부터 값을 입력
 * 
 *    변수
 */ 


int main(void)
{
    int age = 4;

     // age 호출 => 4 값
    printf("%d\n", age);   // age 4

    printf("나이: ");   // age 4
    scanf("%d", &age);   // age 변수의 메모리
    
    printf("%d", age);   // age
}