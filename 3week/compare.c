#include <stdio.h>

int main(void) {
    int input, year;

    //printf("윤년이면 1, 평년이면 0 출력\n");
    printf("윤년 판별기\n");
    printf("연도를 입력해주세요.: ____\b\b\b\b");
    scanf("%d", &input);

    year = (input % 4 ==0) && !(input % 100 == 0) || (input % 400 == 0);
    if(year == 1) {
        printf("%d년은 윤년입니다.", input);
    } 
        else{
        printf("%d년은 윤년이 아닙니다.", input);
    }

    return 0;
}