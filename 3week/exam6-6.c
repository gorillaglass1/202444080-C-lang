#include <stdio.h>

int main(void) {
    int jumsu;
    char grade;

    printf("점수를 입력하세요: ");
    scanf("%d", &jumsu);

    if(jumsu > 90) {
        grade = 'A';
    } else if(jumsu > 80) {
        grade = 'B';
    } else if(jumsu > 70) {
        grade = 'C';
    } else if(jumsu > 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("현재 사용자님의 점수 등급은 %c입니다.", grade);
    return 0;
}