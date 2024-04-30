#include <stdio.h>
int getInteger();

int main(void) {
    int inputNumber = getInteger();
    int inputNumber2 = getInteger();
    printf("%d + %d = %d", inputNumber, inputNumber2, inputNumber+inputNumber2);
    return 0;
}

int getInteger() {
    int inputNumber = 0;
    printf("원하는 숫자를 입력: ");
    scanf("%d", &inputNumber);
    return inputNumber;
}