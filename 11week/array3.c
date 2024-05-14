#include <stdio.h>

#define MAX_NUMBERS 100
#define RANGE 10

void readNumber(int numbers[], int n);
void calculateFrequency(int numbers[], int n, int frequency[]);
void printFrequency(int frequency[], int range);

int main(void) {
    int N;
    printf("배열 개수입력 (%d까지):", MAX_NUMBERS);
    scanf("%d", &N);

    if (N < 1 || N > MAX_NUMBERS) {
        printf("범위 내로 입력하세요. 범위(1~%d까지)\n", MAX_NUMBERS);
        return 1;
    }

    int numbers[N];
    readNumber(numbers, N);

    int frequency[RANGE] = {0};
    calculateFrequency(numbers, N, frequency);

    printFrequency(frequency, RANGE);
    return 0;
}

void readNumber(int numbers[], int n) {
    printf("0~9사이 값 %d번 입력: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i]  < 0 || numbers[i] > 9) {
            printf("%d는 유효하지 않은 숫자임 1~9사이 값 입력\n", numbers[i]);
            i--; //다시 유효한 값을 입력받기 위해 i값을 되돌림. i++무마 시키는 용도
        }
    }
}
void calculateFrequency(int numbers[], int n, int frequency[]) {
    for(int i = 0; i < n; i++) {
        frequency[numbers[i]]++;
    }
}
void printFrequency(int frequency[], int range) {
    for(int i = 0; i < range; i++) {
        printf("%d은 %d회 나옴\n", i, frequency[i]);
    }
}