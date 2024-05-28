#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *pa = NULL;
    pa = &a;

    printf("pa값 출력: %d\n", pa);
    printf("pa가 가리키는 값 출력: %d\n", *pa);

    printf("*++pa 연산 수행: %d\n", *++pa);
    printf("after: %d\n", *pa);

    printf("++*pa 연산 수행: %d\n", ++*pa);
    printf("after: %d\n", *pa);

    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return 0;
}