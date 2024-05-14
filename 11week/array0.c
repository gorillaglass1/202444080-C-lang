#include <stdio.h>

int main(void) {
    int score[5] = {87, 92, 89, 98, 78};
    for(int i = 0; i < sizeof(score)/score[0]; i++) { // sizeof함수를 이용해서 배열의 개수를 측정
        printf("score[%d] = %d\n", i, score[i]);
    }
    return 0;
}