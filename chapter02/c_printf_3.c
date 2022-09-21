#include <stdio.h>

// vs code 단축키
// shift + alt + n : c 실행
// shift + alt + ↓(방향키) : 라인 복사
// ctrl + x : 한줄 지우기
// alt + ↑ or ↓ : 라인 이동
// ctrl + space : 자동완성

/**
 * ""(큰따옴표), ''(작은 따옴표) 차이
 * '' : 문자(character) 'a', 'A', '!'
 * " " : 문자열(string) "A", "ABC",, "A!"
 * 
 *  # 문자('')를 사용하는 경우
 *    + 키보드 제어를 할 때 사용
 * 
 * 컴퓨터는 모든 데이터를 bit로 표현
 *    + bit는 0 또는 1의 값
 *    + 8 bit = 1 Byte   ex) 0110 1110 (1 Byte)
 *    + 1 Byte = 2^8 = 최대 256
 *                           (0~255까지 표현 가능)
 *    + 데이터를 표현할 수 있는 byte가 클 수록 표현 할 수 있는 값도 커짐
 * 
 *    정수(4 Byte), 실수(8 Byte), 문자(4 Byte)
 * 
 * 
 * 문자 컴파일 
 *    + 문자 → 2 진수 형태의 ASCII 코드로 변환
 *    + ex) 'A' → 65
 *    + 문자는 소스코드에서만 문자로 표현되고, 컴퓨터 안에서는 정수와 같은 방식으로 처리
 * 
 * ASCII 코드
 *    + 사람이 사용하는 기호를 컴퓨터 안에서 사용하는 방법
 *    + http://www.ascii-codes.com/
 * 
*/

int main(void)
{
    /* code */
    printf("%c\n", 'A');
    printf("%s\n", "A");
    printf("%c은 %s 입니다.\n", '1', "first" );
    return 0;
}
