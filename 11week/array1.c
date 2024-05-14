#include <stdio.h>

#define DT 3

int main(void) {
    int score[3] = {0};
    int cnt, sum = 0;
    float avg = 0;

    for(cnt = 0; cnt < DT; cnt++) {
        printf("과목%d 점수 : ---\b\b\b", cnt + 1);
        scanf("%d", &score[cnt]); //배열 값에 전달하기 때문에 &필요
        sum += score[cnt];
    }

    avg = (float)sum / DT;

    printf("총점 : %d", sum);
    printf("평균 : %.2f", avg);

    return 0;
}