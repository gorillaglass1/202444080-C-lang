#include <stdio.h>

int Fact(int n);

int main() {
    int input = 0;
    int result = 0;
    printf("팩토리얼 구할 정수(input값) 입력해라\n:");
    scanf("%d", &input);

    result = Fact(input);
    printf("결과: %d", result);
    return 0;
}

int Fact(int n) {
    if(n <= 1) {
        return 1;
    } else {
        printf("수행> %d! : %d * (%d - 1)\n", n, n, n);
        return(n * Fact(n-1));
    }
}