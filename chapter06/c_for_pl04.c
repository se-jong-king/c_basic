#include <stdio.h>
/**
         *  1. 5번 반복
         *  2. 별의 갯수를 반복
         * 
         * i = 1 -> j =0          *
         * i = 2 -> j =0,1        **
         * i = 3 -> j =0,1,2      ***
         * i = 4 -> j =0,1,2,3    ****
         * i = 5 -> j =0,1,2,3,4  *****
        */




int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j =0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
