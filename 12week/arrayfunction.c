#include <stdio.h>
#define DT 5
int sv(int score[], int size);

int main() {
    int score[DT] = {88, 96, 75, 81, 99};
    int sum = 0;
    float avg = 0;

    printf("상수> #define DT 5\n");
    printf("배열> score[DT] = {88, 96, 75, 81, 99}\n");

    sum = sv(score, DT);
    avg = (float)sum/DT;
    // avg = sum/5.0; // 자동 형변환 유도
    printf("반환> 5개 과목의 총점 : %d\n", sum);
    printf("산출> 5개 과목의 평균 : %.2f\n", avg);
    return 0;
}

int sv(int score[], int size) {
    printf("\n사용자 정의 함수로 총점 계산\n");
    int sum  = 0;
    for(int i = 0; i < size; i++)
        sum += score[i];
    return sum;
}