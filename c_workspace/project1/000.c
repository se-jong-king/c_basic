#include<stdio.h>

int main(void) 
{
    int num = 57256;
    int num1 = num / 10000;
    int num2 = (num - num1*10000) / 1000;
    int num3 = (num / 100;
    int num4 = num / 10;
    int num5 = num / 1;

    int total = 0;

    printf("57256 / 10000 = %d", num);
    
    printf("รัวี = %d", total);
    printf("%d, %d, %d, %d, %d", num1, num2, num3, num4, num5);
}