#include <stdio.h>

int main(void) {
    int a, b;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &a);
    printf("\n두 번재 정수를 입력하세요: ");
    scanf("%d", &b);

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);

    return 0;
}