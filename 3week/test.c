#include <stdio.h>

int main(void) {
    int stop = 1;
    while (stop != 0)
    {
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
    
    printf("\n ------------구분-------------- \n");
    printf("\n 끝냄?(입력: - 0 끝냄 1 계속) \n");
    scanf("%d", &stop);
    }
    //printf("끝냄?");
    //scanf("%d", &stop);
    return 0;
}