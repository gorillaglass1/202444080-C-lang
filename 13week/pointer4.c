#include <stdio.h>

int main() {
    char c = 'A';
    char *pc;
    pc = &c;

    int i = 10;
    int *pi;
    pi = &i;

    double d = 5.7;
    double *pd;
    pd = &d;

    printf("1.포인터 증감 연산자 사용 전 주소값\n");
    printf("char형 포인터 주소값: %d\n", pc);
    printf("int형 포인터 주소값: %d\n", pi);
    printf("double형 포인터 주소값: %d\n", pd);

    *pc++;
    *pi++;
    *pd++;

    (*pc)++;
    (*pi)++;
    (*pd)++;

    *++pi;

    ++*pi;

    printf("\n포인터 *p++, (*p)++, *++p, ++*p 연산자 수행 후 주소값\n");
    printf("char형 포인터 주소값: %d\n", pc);
    printf("int형 포인터 주소값: %d\n", pi);
    printf("double형 포인터 주소값: %d\n", pd);
    printf("char형 변수값: %c\n", c);
    printf("int형 변수값: %d\n", i);
    printf("double형 변수값: %.2f\n", d);
    return 0;
}