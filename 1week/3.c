#include <stdio.h>

int main(void) {
    int a, b;    // 3
    printf("일력 값 : ");
    scanf("%d", &a);
    printf("\n출력 값: %d\n", a);

    printf("입력 값 : _____\b\b\b\b\b");
    scanf("%d", &b);
    printf("\n 출력값 : %d\n", b);
    return 0;
}
