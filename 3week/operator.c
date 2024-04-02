#include <stdio.h>

int main(void) {
    int val, a;

    a = 8;
    val = ++a; //전위연산자 a++ 변수를 선언한 경우 a가 저장되고 연산

    printf("a = 8일 때 \n");
    printf("1. val = ++a이면 val = %d, a = %d\n", val, a);

    a = 8;
    val = a++; //후위연산자 ++a 변수를 선언한 경우 연산이 수행되고 a가 저장됨.
    printf("2. val = a++이면 val = %d, a = %d\n", val, a);
    return 0;
}