#include <stdio.h>

int main(void) {
    int num1, num2, sum, min, mul, div;    //4

    printf("1. 첫 번재 정수 입력 :  ");
    scanf("%d", &num1);

    printf("2. 두 번재 정수 입력 :  ");
    scanf("%d", &num2);

    sum = num1 + num2;
    min = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("덧셈 결과: %d + %d = %d\n", num1, num2, sum);
    printf("뺄셈 결과: %d - %d = %d\n", num1, num2, min);
    printf("곱셈 결과: %d * %d = %d\n", num1, num2, mul);
    printf("나눗셈 결과: %d / %d = %d\n", num1, num2, div);
    printf("나눗셈 결과(소수점): %d / %d = %.2f\n", num1, num2, (float)num1/num2); //형 변환을 통한 소수점 표현(하나만 형변환을 하면 나머지도 자동 형변환)
    
    char s[] = {'H', 'E', 'L', 'L', 'O'}; //4
    printf("%d", sizeof(s));
    return 0;
}