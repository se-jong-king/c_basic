#include <stdio.h>

/**
 *  for문 : 초기식, 조건식, 증감식으로 구성
 *     - 반복횟수를 세는 변수(i)는 반복문 안에서 변경금지(개발자 규칙)
 *   반복횟수가 정해짐
 *      -> 반복횟수 count : i(index) 변수
 *         i = i+1; X
 *       i=0 : 초기식, i<3; : 조건식, 
 *       i
*/



int main(void)
{
    int a = 1;
    int i;

    for (i = 0; i < 3; i++)
    {
        a = a*2;
    }
    printf("a : %d\n", a);
}
