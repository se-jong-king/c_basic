#include <stdio.h>

/**
 *  ������ 2�� ���
 *   2 X 1 = 2
 *   2 X 2 = 4
 *   2 X 3 = 6
 *   2 X 4 = 8
 *   2 X 5 = 10
 *   2 X 6 = 12
 *   2 X 7 = 14
 *   2 X 8 = 16
 *   2 X 9 = 18
*/

int main(void) {
    for (int i = 1; i <= 9; i++) {
        printf("2 X %d = %d\n", i, 2*i);
    }   
}

