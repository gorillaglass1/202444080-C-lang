#include <stdio.h>
#define AL 7

int main() {
    int sList[AL] = {5, 4, 1, 3, 2, 7, 6};
    int input, cnt = 0;
    char yn = '\0';

    printf("초기 배열 요소: 5, 4, 1, 3, 2, 7, 6\n");

    while(1)
    {
        printf("숫자 입력(1~7): ");
        scanf("%d", &input);
        printf("\n");

        if(input < 1 || input > 7){
            printf("유효하지 않은 값입니다. 다시 입력하세요\n");
            continue;
        }

        for(cnt = 0; cnt < AL; cnt++) {
            if(sList[cnt] == input) {
            printf("순차 탐색 횟수 : %d회\n", cnt+1);
            printf("탐색 성공 인덱스 : %d\n", cnt);
            }
        }

        re_ch:

        printf("프로그램을 다시 시작 할가요? (Y / N)");
        scanf("%c", &yn);

        if(yn == 'N' || 'n') {
            break;
        } else if(yn == 'Y' || 'y') {
            continue;
        } else {
            printf("알파벳 입력 오류!\n");
            printf("알파벳을 다시 입력하세요\n");
            goto re_ch;
        }
    }
    return 0;
}