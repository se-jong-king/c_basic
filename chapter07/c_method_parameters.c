#include<stdio.h>

/**
 *  
 *  int main(){
 *     printf("d%", sum(5, 10));
 *  }   
 *      ↓            (return)
 *      ↓               ↑
 *      ↓               ↑
 *  (parameters)        ↑
 *   int sum(int x, int y) {
 *   return x + y;
 * }
 * 
*/

// 함수 -> 
// 함수 -> X, return
int get_num(void); // 선언

int main(void) //호출
{
    printf("값: %d", get_num());
}
// main()함수 위에 함수가 선언되면, 함수선언 따로할 필요 없음
// void : 해당 값을 사용하지 않을 경우
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);  //정의 
    return num;
}