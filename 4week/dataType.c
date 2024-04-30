#include <stdio.h>

int main(void) {
    short num1;
    int num2;
    long num3;
    long long num4;

    printf("자료형의 크기를 구하는 함수 : sizeof() 함수\n");
    printf("1.short형 변수 %d바이트\n", sizeof(num1));
    printf("2.int형 변수 %d바이트\n", sizeof(num2));
    printf("3.long형 변수 %ld바이트\n", sizeof(num3));
    printf("4.long long형 변수 %ld바이트\n", sizeof(num4));
    
    printf("\n\n ----구분----\n");
    printf("1바이트는 8비트입니다.\n");
    printf("5. short형 변수 : %d비트\n", sizeof(num1) * 8);
    printf("6. int형 변수 : %d비트\n", sizeof(num2) * 8);
    printf("7. long형 변수 : %ld비트\n", sizeof(num3) * 8);
    printf("8. long long형 변수 : %ld비트\n", sizeof(num4) * 8);

    printf("\n\n ----구분----\n");
    unsigned short a, b, result;

    printf("unsigned short형 유효 범위 0~65,535\n");
    printf("1. 첫 번째 정수 입력 : ");
    scanf("%hu", &a);
    printf("2. 두 번째 정수 입력 : ");
    scanf("%hu", &b);

    result = a - b;
    printf("뺄셈 연산 : %hu - %hu = %hu", a, b, result);

    return 0;
}