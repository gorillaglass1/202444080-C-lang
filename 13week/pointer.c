#include <stdio.h>

int main() {
    int a = 8;
    int *pa = NULL;
    // int *pa = &a; // 도 가능

    pa = &a;

    float b = 3.75;
    float *pb = &b;

    printf("일반 변수 a의 값: %d\n", a);
    printf("일반 변수 a의 주소값: %u\n", &a);
    printf("포인터 pa의 주소값: %zu\n", pa);
    printf("일반 변수 b의 값: %.2f\n", b);
    printf("일반 변수 b의 주소값: %u\n", &b);
    printf("포인터 pb의 주소값: %zu\n\n", pb);

    printf("NULL의 주소값: %u\n", NULL);
    return 0;
}