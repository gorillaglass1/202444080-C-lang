#include <stdio.h>
int Compare(int num0, int num1);

int main(void) {
    int input0, input1 = 0;
    printf("숫자 2개 입력");
    scanf("%d %d", &input0, &input1);
    printf("%d", Compare(input0, input1));
    return 0;
}

int Compare(int num0, int num1) { //큰 숫자 반환
    return (num0 > num1)? num0 : num1;
}