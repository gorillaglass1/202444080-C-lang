#include <stdio.h>
#define CNT 7
void count_up(int a[], int cnt); //int cnt는 불필요 => 기호상수는 전역적으로 사용가능함

int main(void) {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    printf("before : \n");
    for(int i = 0; i < CNT; i++) {
        printf("%d\n", a[i]);
    }
    count_up(a, sizeof(a)/sizeof(a[0])); //주소를 통채로 전달했기 때문에 원본이 변경됨
    printf("After : \n");
    for(int i = 0; i < CNT; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}

void count_up(int a[], int cnt) {
    for(int i = 0; i < cnt; i++) { // 조건식에 CNT(기호상수)를 바로 쓰면 됨
        a[i] += 1;
    }
}