#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int (*ap)[5];
    int cnt;

    ap = &a;
    printf("\n배열 포인터 ap의 주소 : %d\n\n", ap);

    for(cnt = 0; cnt < 5; cnt++) {
        printf("%d번째 요소 : %d\n", cnt + 1, (*ap)[cnt]);
    }
    return 0;
}