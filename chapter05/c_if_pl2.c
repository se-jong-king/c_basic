#include <stdio.h>


/**
 *  학점계산기
 *     - 사용자로부터 점수(0~100점)
 *     - 91~100 : A
 *     - 81~90  : B
 *     - 71~80  : C
 *     - 61~70  : D
 *     - ~60    : F
 * 
 * 
 *  조건1 : score >= 91
 *  조건2 : score <= 100
 * && : AND 연산자 → 조건 2개가 모두 참인 경우에만 참!
*/

int main(void) {
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score);

    if (score <=100 && score >= 91) {
        grade = 'A';
    } else if (score <= 90 && score >= 81){
        grade = 'B';
    } else if(score <= 80 && score >= 71){
        grade = 'C';
    } else if(score <= 71 && score >= 61){
        grade = 'D';
    } else if(score <= 60 && score >= 0){
        grade = 'F';
    }
    if(score >= 0 && score <= 100) {
        printf("학생의 점수는 %d점으로 %c학점 입니다.", score, grade);
    }
}
