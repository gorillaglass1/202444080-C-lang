#include <stdio.h>
//연산자 ==: 같을때 true, !=: 다를 때 true
//#define TM 60 /기호상수: 상수를 정의하는 법 TM을 60으로 상수화(전처리 부분에 정의)

int main(void) {
    int num1;
    int num2;
    int num3;
    int num4;

    scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
    //int count;
    int sum = num1 + num2 + num3 + num4;
    float avrage = (float)(num1 + num2 + num3 + num4)/4 ;
    return 0;
}